; Auto-generated. Do not edit!


(cl:in-package crr_robot_controller-srv)


;//! \htmlinclude crrCtrl-request.msg.html

(cl:defclass <crrCtrl-request> (roslisp-msg-protocol:ros-message)
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

(cl:defclass crrCtrl-request (<crrCtrl-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <crrCtrl-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'crrCtrl-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name crr_robot_controller-srv:<crrCtrl-request> is deprecated: use crr_robot_controller-srv:crrCtrl-request instead.")))

(cl:ensure-generic-function 'direction-val :lambda-list '(m))
(cl:defmethod direction-val ((m <crrCtrl-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader crr_robot_controller-srv:direction-val is deprecated.  Use crr_robot_controller-srv:direction instead.")
  (direction m))

(cl:ensure-generic-function 'mode-val :lambda-list '(m))
(cl:defmethod mode-val ((m <crrCtrl-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader crr_robot_controller-srv:mode-val is deprecated.  Use crr_robot_controller-srv:mode instead.")
  (mode m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <crrCtrl-request>) ostream)
  "Serializes a message object of type '<crrCtrl-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'direction)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mode)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <crrCtrl-request>) istream)
  "Deserializes a message object of type '<crrCtrl-request>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'direction)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mode)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<crrCtrl-request>)))
  "Returns string type for a service object of type '<crrCtrl-request>"
  "crr_robot_controller/crrCtrlRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'crrCtrl-request)))
  "Returns string type for a service object of type 'crrCtrl-request"
  "crr_robot_controller/crrCtrlRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<crrCtrl-request>)))
  "Returns md5sum for a message object of type '<crrCtrl-request>"
  "26ed05ce104f8ffa03e251eddea0744b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'crrCtrl-request)))
  "Returns md5sum for a message object of type 'crrCtrl-request"
  "26ed05ce104f8ffa03e251eddea0744b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<crrCtrl-request>)))
  "Returns full string definition for message of type '<crrCtrl-request>"
  (cl:format cl:nil "uint8 direction~%uint8 mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'crrCtrl-request)))
  "Returns full string definition for message of type 'crrCtrl-request"
  (cl:format cl:nil "uint8 direction~%uint8 mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <crrCtrl-request>))
  (cl:+ 0
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <crrCtrl-request>))
  "Converts a ROS message object to a list"
  (cl:list 'crrCtrl-request
    (cl:cons ':direction (direction msg))
    (cl:cons ':mode (mode msg))
))
;//! \htmlinclude crrCtrl-response.msg.html

(cl:defclass <crrCtrl-response> (roslisp-msg-protocol:ros-message)
  ((response
    :reader response
    :initarg :response
    :type cl:fixnum
    :initform 0))
)

(cl:defclass crrCtrl-response (<crrCtrl-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <crrCtrl-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'crrCtrl-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name crr_robot_controller-srv:<crrCtrl-response> is deprecated: use crr_robot_controller-srv:crrCtrl-response instead.")))

(cl:ensure-generic-function 'response-val :lambda-list '(m))
(cl:defmethod response-val ((m <crrCtrl-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader crr_robot_controller-srv:response-val is deprecated.  Use crr_robot_controller-srv:response instead.")
  (response m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <crrCtrl-response>) ostream)
  "Serializes a message object of type '<crrCtrl-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'response)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <crrCtrl-response>) istream)
  "Deserializes a message object of type '<crrCtrl-response>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'response)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<crrCtrl-response>)))
  "Returns string type for a service object of type '<crrCtrl-response>"
  "crr_robot_controller/crrCtrlResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'crrCtrl-response)))
  "Returns string type for a service object of type 'crrCtrl-response"
  "crr_robot_controller/crrCtrlResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<crrCtrl-response>)))
  "Returns md5sum for a message object of type '<crrCtrl-response>"
  "26ed05ce104f8ffa03e251eddea0744b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'crrCtrl-response)))
  "Returns md5sum for a message object of type 'crrCtrl-response"
  "26ed05ce104f8ffa03e251eddea0744b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<crrCtrl-response>)))
  "Returns full string definition for message of type '<crrCtrl-response>"
  (cl:format cl:nil "uint8 response~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'crrCtrl-response)))
  "Returns full string definition for message of type 'crrCtrl-response"
  (cl:format cl:nil "uint8 response~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <crrCtrl-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <crrCtrl-response>))
  "Converts a ROS message object to a list"
  (cl:list 'crrCtrl-response
    (cl:cons ':response (response msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'crrCtrl)))
  'crrCtrl-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'crrCtrl)))
  'crrCtrl-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'crrCtrl)))
  "Returns string type for a service object of type '<crrCtrl>"
  "crr_robot_controller/crrCtrl")