
(cl:in-package :asdf)

(defsystem "occ_predictor_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "PredictPCL" :depends-on ("_package_PredictPCL"))
    (:file "_package_PredictPCL" :depends-on ("_package"))
  ))