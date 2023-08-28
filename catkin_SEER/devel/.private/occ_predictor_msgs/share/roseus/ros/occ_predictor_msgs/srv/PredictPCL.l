;; Auto-generated. Do not edit!


(when (boundp 'occ_predictor_msgs::PredictPCL)
  (if (not (find-package "OCC_PREDICTOR_MSGS"))
    (make-package "OCC_PREDICTOR_MSGS"))
  (shadow 'PredictPCL (find-package "OCC_PREDICTOR_MSGS")))
(unless (find-package "OCC_PREDICTOR_MSGS::PREDICTPCL")
  (make-package "OCC_PREDICTOR_MSGS::PREDICTPCL"))
(unless (find-package "OCC_PREDICTOR_MSGS::PREDICTPCLREQUEST")
  (make-package "OCC_PREDICTOR_MSGS::PREDICTPCLREQUEST"))
(unless (find-package "OCC_PREDICTOR_MSGS::PREDICTPCLRESPONSE")
  (make-package "OCC_PREDICTOR_MSGS::PREDICTPCLRESPONSE"))

(in-package "ROS")





(defclass occ_predictor_msgs::PredictPCLRequest
  :super ros::object
  :slots (_dim_x _dim_y _dim_z _input ))

(defmethod occ_predictor_msgs::PredictPCLRequest
  (:init
   (&key
    ((:dim_x __dim_x) 0)
    ((:dim_y __dim_y) 0)
    ((:dim_z __dim_z) 0)
    ((:input __input) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _dim_x (round __dim_x))
   (setq _dim_y (round __dim_y))
   (setq _dim_z (round __dim_z))
   (setq _input __input)
   self)
  (:dim_x
   (&optional __dim_x)
   (if __dim_x (setq _dim_x __dim_x)) _dim_x)
  (:dim_y
   (&optional __dim_y)
   (if __dim_y (setq _dim_y __dim_y)) _dim_y)
  (:dim_z
   (&optional __dim_z)
   (if __dim_z (setq _dim_z __dim_z)) _dim_z)
  (:input
   (&optional __input)
   (if __input (setq _input __input)) _input)
  (:serialization-length
   ()
   (+
    ;; int16 _dim_x
    2
    ;; int16 _dim_y
    2
    ;; int16 _dim_z
    2
    ;; float32[] _input
    (* 4    (length _input)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16 _dim_x
       (write-word _dim_x s)
     ;; int16 _dim_y
       (write-word _dim_y s)
     ;; int16 _dim_z
       (write-word _dim_z s)
     ;; float32[] _input
     (write-long (length _input) s)
     (dotimes (i (length _input))
       (sys::poke (elt _input i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16 _dim_x
     (setq _dim_x (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _dim_y
     (setq _dim_y (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _dim_z
     (setq _dim_z (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; float32[] _input
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _input (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _input i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(defclass occ_predictor_msgs::PredictPCLResponse
  :super ros::object
  :slots (_pred ))

(defmethod occ_predictor_msgs::PredictPCLResponse
  (:init
   (&key
    ((:pred __pred) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _pred __pred)
   self)
  (:pred
   (&optional __pred)
   (if __pred (setq _pred __pred)) _pred)
  (:serialization-length
   ()
   (+
    ;; float32[] _pred
    (* 4    (length _pred)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32[] _pred
     (write-long (length _pred) s)
     (dotimes (i (length _pred))
       (sys::poke (elt _pred i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32[] _pred
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _pred (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _pred i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(defclass occ_predictor_msgs::PredictPCL
  :super ros::object
  :slots ())

(setf (get occ_predictor_msgs::PredictPCL :md5sum-) "1d63e5eadaf190a0779142cc5f3ada89")
(setf (get occ_predictor_msgs::PredictPCL :datatype-) "occ_predictor_msgs/PredictPCL")
(setf (get occ_predictor_msgs::PredictPCL :request) occ_predictor_msgs::PredictPCLRequest)
(setf (get occ_predictor_msgs::PredictPCL :response) occ_predictor_msgs::PredictPCLResponse)

(defmethod occ_predictor_msgs::PredictPCLRequest
  (:response () (instance occ_predictor_msgs::PredictPCLResponse :init)))

(setf (get occ_predictor_msgs::PredictPCLRequest :md5sum-) "1d63e5eadaf190a0779142cc5f3ada89")
(setf (get occ_predictor_msgs::PredictPCLRequest :datatype-) "occ_predictor_msgs/PredictPCLRequest")
(setf (get occ_predictor_msgs::PredictPCLRequest :definition-)
      "int16 dim_x
int16 dim_y
int16 dim_z
float32[] input
---
float32[] pred
")

(setf (get occ_predictor_msgs::PredictPCLResponse :md5sum-) "1d63e5eadaf190a0779142cc5f3ada89")
(setf (get occ_predictor_msgs::PredictPCLResponse :datatype-) "occ_predictor_msgs/PredictPCLResponse")
(setf (get occ_predictor_msgs::PredictPCLResponse :definition-)
      "int16 dim_x
int16 dim_y
int16 dim_z
float32[] input
---
float32[] pred
")



(provide :occ_predictor_msgs/PredictPCL "1d63e5eadaf190a0779142cc5f3ada89")


