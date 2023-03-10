;; Auto-generated. Do not edit!


(when (boundp 'gazebo_grasp_plugin_ros::GazeboGraspEvent)
  (if (not (find-package "GAZEBO_GRASP_PLUGIN_ROS"))
    (make-package "GAZEBO_GRASP_PLUGIN_ROS"))
  (shadow 'GazeboGraspEvent (find-package "GAZEBO_GRASP_PLUGIN_ROS")))
(unless (find-package "GAZEBO_GRASP_PLUGIN_ROS::GAZEBOGRASPEVENT")
  (make-package "GAZEBO_GRASP_PLUGIN_ROS::GAZEBOGRASPEVENT"))

(in-package "ROS")
;;//! \htmlinclude GazeboGraspEvent.msg.html


(defclass gazebo_grasp_plugin_ros::GazeboGraspEvent
  :super ros::object
  :slots (_arm _object _attached ))

(defmethod gazebo_grasp_plugin_ros::GazeboGraspEvent
  (:init
   (&key
    ((:arm __arm) "")
    ((:object __object) "")
    ((:attached __attached) nil)
    )
   (send-super :init)
   (setq _arm (string __arm))
   (setq _object (string __object))
   (setq _attached __attached)
   self)
  (:arm
   (&optional __arm)
   (if __arm (setq _arm __arm)) _arm)
  (:object
   (&optional __object)
   (if __object (setq _object __object)) _object)
  (:attached
   (&optional __attached)
   (if __attached (setq _attached __attached)) _attached)
  (:serialization-length
   ()
   (+
    ;; string _arm
    4 (length _arm)
    ;; string _object
    4 (length _object)
    ;; bool _attached
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _arm
       (write-long (length _arm) s) (princ _arm s)
     ;; string _object
       (write-long (length _object) s) (princ _object s)
     ;; bool _attached
       (if _attached (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _arm
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _arm (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _object
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _object (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; bool _attached
     (setq _attached (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get gazebo_grasp_plugin_ros::GazeboGraspEvent :md5sum-) "a5b6c6f554465c6bcbcad9409a41137a")
(setf (get gazebo_grasp_plugin_ros::GazeboGraspEvent :datatype-) "gazebo_grasp_plugin_ros/GazeboGraspEvent")
(setf (get gazebo_grasp_plugin_ros::GazeboGraspEvent :definition-)
      "# Message to notify about grasp events in gazebo

# name of grasping arm/gripper 
string arm

# collision shape name of grasped object
string object

# detached if false
bool attached

")



(provide :gazebo_grasp_plugin_ros/GazeboGraspEvent "a5b6c6f554465c6bcbcad9409a41137a")


