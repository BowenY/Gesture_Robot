; Auto-generated. Do not edit!


(cl:in-package crr_robot_controller-msg)


;//! \htmlinclude crrControllerMsg.msg.html

(cl:defclass <crrControllerMsg> (roslisp-msg-protocol:ros-message)
  ((direction
    :reader direction
    :initarg :direction
    :type cl:fixnum
    :initform 0)
   (mode
    :reader mode
    :initarg :mode
    :type cl:fixnum
    :initform 0))
)

(cl:defclass crrControllerMsg (<crrControllerMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <crrControllerMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'crrControllerMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name crr_robot_controller-msg:<crrControllerMsg> is deprecated: use crr_robot_controller-msg:crrControllerMsg instead.")))

(cl:ensure-generic-function 'direction-val :lambda-list '(m))
(cl:defmethod direction-val ((m <crrControllerMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader crr_robot_controller-msg:direction-val is deprecated.  Use crr_robot_controller-msg:direction instead.")
  (direction m))

(cl:ensure-generic-function 'mode-val :lambda-list '(m))
(cl:defmethod mode-val ((m <crrControllerMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader crr_robot_controller-msg:mode-val is deprecated.  Use crr_robot_controller-msg:mode instead.")
  (mode m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <crrControllerMsg>) ostream)
  "Serializes a message object of type '<crrControllerMsg>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'direction)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mode)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <crrControllerMsg>) istream)
  "Deserializes a message object of type '<crrControllerMsg>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'direction)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mode)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<crrControllerMsg>)))
  "Returns string type for a message object of type '<crrControllerMsg>"
  "crr_robot_controller/crrControllerMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'crrControllerMsg)))
  "Returns string type for a message object of type 'crrControllerMsg"
  "crr_robot_controller/crrControllerMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<crrControllerMsg>)))
  "Returns md5sum for a message object of type '<crrControllerMsg>"
  "705346ba406dd3cf9e01f15a21777279")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'crrControllerMsg)))
  "Returns md5sum for a message object of type 'crrControllerMsg"
  "705346ba406dd3cf9e01f15a21777279")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<crrControllerMsg>)))
  "Returns full string definition for message of type '<crrControllerMsg>"
  (cl:format cl:nil "uint8 direction~%uint8 mode~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'crrControllerMsg)))
  "Returns full string definition for message of type 'crrControllerMsg"
  (cl:format cl:nil "uint8 direction~%uint8 mode~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <crrControllerMsg>))
  (cl:+ 0
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <crrControllerMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'crrControllerMsg
    (cl:cons ':direction (direction msg))
    (cl:cons ':mode (mode msg))
))
