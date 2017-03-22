; Auto-generated. Do not edit!


(cl:in-package crr_robot_controller-msg)


;//! \htmlinclude crrContrl.msg.html

(cl:defclass <crrContrl> (roslisp-msg-protocol:ros-message)
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

(cl:defclass crrContrl (<crrContrl>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <crrContrl>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'crrContrl)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name crr_robot_controller-msg:<crrContrl> is deprecated: use crr_robot_controller-msg:crrContrl instead.")))

(cl:ensure-generic-function 'direction-val :lambda-list '(m))
(cl:defmethod direction-val ((m <crrContrl>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader crr_robot_controller-msg:direction-val is deprecated.  Use crr_robot_controller-msg:direction instead.")
  (direction m))

(cl:ensure-generic-function 'mode-val :lambda-list '(m))
(cl:defmethod mode-val ((m <crrContrl>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader crr_robot_controller-msg:mode-val is deprecated.  Use crr_robot_controller-msg:mode instead.")
  (mode m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <crrContrl>) ostream)
  "Serializes a message object of type '<crrContrl>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'direction)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mode)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <crrContrl>) istream)
  "Deserializes a message object of type '<crrContrl>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'direction)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mode)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<crrContrl>)))
  "Returns string type for a message object of type '<crrContrl>"
  "crr_robot_controller/crrContrl")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'crrContrl)))
  "Returns string type for a message object of type 'crrContrl"
  "crr_robot_controller/crrContrl")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<crrContrl>)))
  "Returns md5sum for a message object of type '<crrContrl>"
  "705346ba406dd3cf9e01f15a21777279")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'crrContrl)))
  "Returns md5sum for a message object of type 'crrContrl"
  "705346ba406dd3cf9e01f15a21777279")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<crrContrl>)))
  "Returns full string definition for message of type '<crrContrl>"
  (cl:format cl:nil "uint8 direction~%uint8 mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'crrContrl)))
  "Returns full string definition for message of type 'crrContrl"
  (cl:format cl:nil "uint8 direction~%uint8 mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <crrContrl>))
  (cl:+ 0
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <crrContrl>))
  "Converts a ROS message object to a list"
  (cl:list 'crrContrl
    (cl:cons ':direction (direction msg))
    (cl:cons ':mode (mode msg))
))
