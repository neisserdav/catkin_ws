#! /usr/bin/env python

import sys
import copy
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg

moveit_commander.roscpp_initialize(sys.argv)
rospy.init_node('move_group_python_interface_tutorial', anonymous=True)

robot = moveit_commander.RobotCommander()
scene = moveit_commander.PlanningSceneInterface()    
group = moveit_commander.MoveGroupCommander("kukra_arm")
display_trajectory_publisher = rospy.Publisher('/move_group/display_planned_path', moveit_msgs.msg.DisplayTrajectory, queue_size=1)


waypoints = []

pose_target = geometry_msgs.msg.Pose()
pose_target.orientation.w = 1.0
pose_target.position.x = 1.2
pose_target.position.y = 0
pose_target.position.z = 1.53

waypoints.append(copy.deepcopy(pose_target))

pose_target = geometry_msgs.msg.Pose()
pose_target.orientation.w = 1.0
pose_target.position.x = 0.85
pose_target.position.y = 0.85
pose_target.position.z = 1.53

waypoints.append(copy.deepcopy(pose_target))

pose_target = geometry_msgs.msg.Pose()
pose_target.orientation.w = 1.0
pose_target.position.x = 0
pose_target.position.y = 1.2
pose_target.position.z = 1.53

waypoints.append(copy.deepcopy(pose_target))

pose_target = geometry_msgs.msg.Pose()
pose_target.orientation.w = 1.0
pose_target.position.x = -1.1
pose_target.position.y = 1.1
pose_target.position.z = 1.53

waypoints.append(copy.deepcopy(pose_target))


# We want the Cartesian path to be interpolated at a resolution of 1 cm
# which is why we will specify 0.01 as the eef_step in Cartesian
# translation.  We will disable the jump threshold by setting it to 0.0,
# ignoring the check for infeasible jumps in joint space, which is sufficient
# for this tutorial.
fraction = 0.0
maxtries = 200
attempts = 0
(plan, fraction) = group.compute_cartesian_path(
                                   waypoints,   # waypoints to follow
                                   0.01,        # eef_step
                                   0.0)         # jump_threshold
#while fraction < 1.0 and attempts < maxtries:
#    (plan, fraction) = group.compute_cartesian_path(
#                                   waypoints,   # waypoints to follow
#                                   0.01,        # eef_step
#                                   0.0)         # jump_threshold
    
#    attempts+=1
#    if attempts % 10 == 0:
#        rospy.loginfo("Still trying after " + str(attempts) + " attempts...")

group.execute(plan, wait=True)
# Note: We are just planning, not asking move_group to actually move the robot yet:
rospy.sleep(1)


# Calling `stop()` ensures that there is no residual movement
group.stop()
# It is always good to clear your targets after planning with poses.
# Note: there is no equivalent function for clear_joint_value_targets()
group.clear_pose_targets()
rospy.sleep(5)

moveit_commander.roscpp_shutdown()