
(cl:in-package :asdf)

(defsystem "crr_robot_controller-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "crrContrl" :depends-on ("_package_crrContrl"))
    (:file "_package_crrContrl" :depends-on ("_package"))
  ))