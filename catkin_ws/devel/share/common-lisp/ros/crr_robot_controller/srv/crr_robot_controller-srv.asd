
(cl:in-package :asdf)

(defsystem "crr_robot_controller-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "crrCtrl" :depends-on ("_package_crrCtrl"))
    (:file "_package_crrCtrl" :depends-on ("_package"))
  ))