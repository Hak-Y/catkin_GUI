; Auto-generated. Do not edit!


(cl:in-package occ_predictor_msgs-srv)


;//! \htmlinclude PredictPCL-request.msg.html

(cl:defclass <PredictPCL-request> (roslisp-msg-protocol:ros-message)
  ((dim_x
    :reader dim_x
    :initarg :dim_x
    :type cl:fixnum
    :initform 0)
   (dim_y
    :reader dim_y
    :initarg :dim_y
    :type cl:fixnum
    :initform 0)
   (dim_z
    :reader dim_z
    :initarg :dim_z
    :type cl:fixnum
    :initform 0)
   (input
    :reader input
    :initarg :input
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass PredictPCL-request (<PredictPCL-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PredictPCL-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PredictPCL-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name occ_predictor_msgs-srv:<PredictPCL-request> is deprecated: use occ_predictor_msgs-srv:PredictPCL-request instead.")))

(cl:ensure-generic-function 'dim_x-val :lambda-list '(m))
(cl:defmethod dim_x-val ((m <PredictPCL-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader occ_predictor_msgs-srv:dim_x-val is deprecated.  Use occ_predictor_msgs-srv:dim_x instead.")
  (dim_x m))

(cl:ensure-generic-function 'dim_y-val :lambda-list '(m))
(cl:defmethod dim_y-val ((m <PredictPCL-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader occ_predictor_msgs-srv:dim_y-val is deprecated.  Use occ_predictor_msgs-srv:dim_y instead.")
  (dim_y m))

(cl:ensure-generic-function 'dim_z-val :lambda-list '(m))
(cl:defmethod dim_z-val ((m <PredictPCL-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader occ_predictor_msgs-srv:dim_z-val is deprecated.  Use occ_predictor_msgs-srv:dim_z instead.")
  (dim_z m))

(cl:ensure-generic-function 'input-val :lambda-list '(m))
(cl:defmethod input-val ((m <PredictPCL-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader occ_predictor_msgs-srv:input-val is deprecated.  Use occ_predictor_msgs-srv:input instead.")
  (input m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PredictPCL-request>) ostream)
  "Serializes a message object of type '<PredictPCL-request>"
  (cl:let* ((signed (cl:slot-value msg 'dim_x)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'dim_y)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'dim_z)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'input))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'input))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PredictPCL-request>) istream)
  "Deserializes a message object of type '<PredictPCL-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'dim_x) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'dim_y) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'dim_z) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'input) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'input)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PredictPCL-request>)))
  "Returns string type for a service object of type '<PredictPCL-request>"
  "occ_predictor_msgs/PredictPCLRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PredictPCL-request)))
  "Returns string type for a service object of type 'PredictPCL-request"
  "occ_predictor_msgs/PredictPCLRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PredictPCL-request>)))
  "Returns md5sum for a message object of type '<PredictPCL-request>"
  "1d63e5eadaf190a0779142cc5f3ada89")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PredictPCL-request)))
  "Returns md5sum for a message object of type 'PredictPCL-request"
  "1d63e5eadaf190a0779142cc5f3ada89")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PredictPCL-request>)))
  "Returns full string definition for message of type '<PredictPCL-request>"
  (cl:format cl:nil "int16 dim_x~%int16 dim_y~%int16 dim_z~%float32[] input~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PredictPCL-request)))
  "Returns full string definition for message of type 'PredictPCL-request"
  (cl:format cl:nil "int16 dim_x~%int16 dim_y~%int16 dim_z~%float32[] input~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PredictPCL-request>))
  (cl:+ 0
     2
     2
     2
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'input) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PredictPCL-request>))
  "Converts a ROS message object to a list"
  (cl:list 'PredictPCL-request
    (cl:cons ':dim_x (dim_x msg))
    (cl:cons ':dim_y (dim_y msg))
    (cl:cons ':dim_z (dim_z msg))
    (cl:cons ':input (input msg))
))
;//! \htmlinclude PredictPCL-response.msg.html

(cl:defclass <PredictPCL-response> (roslisp-msg-protocol:ros-message)
  ((pred
    :reader pred
    :initarg :pred
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass PredictPCL-response (<PredictPCL-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PredictPCL-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PredictPCL-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name occ_predictor_msgs-srv:<PredictPCL-response> is deprecated: use occ_predictor_msgs-srv:PredictPCL-response instead.")))

(cl:ensure-generic-function 'pred-val :lambda-list '(m))
(cl:defmethod pred-val ((m <PredictPCL-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader occ_predictor_msgs-srv:pred-val is deprecated.  Use occ_predictor_msgs-srv:pred instead.")
  (pred m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PredictPCL-response>) ostream)
  "Serializes a message object of type '<PredictPCL-response>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'pred))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'pred))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PredictPCL-response>) istream)
  "Deserializes a message object of type '<PredictPCL-response>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'pred) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'pred)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PredictPCL-response>)))
  "Returns string type for a service object of type '<PredictPCL-response>"
  "occ_predictor_msgs/PredictPCLResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PredictPCL-response)))
  "Returns string type for a service object of type 'PredictPCL-response"
  "occ_predictor_msgs/PredictPCLResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PredictPCL-response>)))
  "Returns md5sum for a message object of type '<PredictPCL-response>"
  "1d63e5eadaf190a0779142cc5f3ada89")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PredictPCL-response)))
  "Returns md5sum for a message object of type 'PredictPCL-response"
  "1d63e5eadaf190a0779142cc5f3ada89")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PredictPCL-response>)))
  "Returns full string definition for message of type '<PredictPCL-response>"
  (cl:format cl:nil "float32[] pred~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PredictPCL-response)))
  "Returns full string definition for message of type 'PredictPCL-response"
  (cl:format cl:nil "float32[] pred~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PredictPCL-response>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'pred) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PredictPCL-response>))
  "Converts a ROS message object to a list"
  (cl:list 'PredictPCL-response
    (cl:cons ':pred (pred msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'PredictPCL)))
  'PredictPCL-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'PredictPCL)))
  'PredictPCL-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PredictPCL)))
  "Returns string type for a service object of type '<PredictPCL>"
  "occ_predictor_msgs/PredictPCL")