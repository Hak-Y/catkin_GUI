// Auto-generated. Do not edit!

// (in-package occ_predictor_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class PredictPCLRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.dim_x = null;
      this.dim_y = null;
      this.dim_z = null;
      this.input = null;
    }
    else {
      if (initObj.hasOwnProperty('dim_x')) {
        this.dim_x = initObj.dim_x
      }
      else {
        this.dim_x = 0;
      }
      if (initObj.hasOwnProperty('dim_y')) {
        this.dim_y = initObj.dim_y
      }
      else {
        this.dim_y = 0;
      }
      if (initObj.hasOwnProperty('dim_z')) {
        this.dim_z = initObj.dim_z
      }
      else {
        this.dim_z = 0;
      }
      if (initObj.hasOwnProperty('input')) {
        this.input = initObj.input
      }
      else {
        this.input = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type PredictPCLRequest
    // Serialize message field [dim_x]
    bufferOffset = _serializer.int16(obj.dim_x, buffer, bufferOffset);
    // Serialize message field [dim_y]
    bufferOffset = _serializer.int16(obj.dim_y, buffer, bufferOffset);
    // Serialize message field [dim_z]
    bufferOffset = _serializer.int16(obj.dim_z, buffer, bufferOffset);
    // Serialize message field [input]
    bufferOffset = _arraySerializer.float32(obj.input, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type PredictPCLRequest
    let len;
    let data = new PredictPCLRequest(null);
    // Deserialize message field [dim_x]
    data.dim_x = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [dim_y]
    data.dim_y = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [dim_z]
    data.dim_z = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [input]
    data.input = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.input.length;
    return length + 10;
  }

  static datatype() {
    // Returns string type for a service object
    return 'occ_predictor_msgs/PredictPCLRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7616cd2099920ea9fd35f770f4fb616a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int16 dim_x
    int16 dim_y
    int16 dim_z
    float32[] input
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new PredictPCLRequest(null);
    if (msg.dim_x !== undefined) {
      resolved.dim_x = msg.dim_x;
    }
    else {
      resolved.dim_x = 0
    }

    if (msg.dim_y !== undefined) {
      resolved.dim_y = msg.dim_y;
    }
    else {
      resolved.dim_y = 0
    }

    if (msg.dim_z !== undefined) {
      resolved.dim_z = msg.dim_z;
    }
    else {
      resolved.dim_z = 0
    }

    if (msg.input !== undefined) {
      resolved.input = msg.input;
    }
    else {
      resolved.input = []
    }

    return resolved;
    }
};

class PredictPCLResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.pred = null;
    }
    else {
      if (initObj.hasOwnProperty('pred')) {
        this.pred = initObj.pred
      }
      else {
        this.pred = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type PredictPCLResponse
    // Serialize message field [pred]
    bufferOffset = _arraySerializer.float32(obj.pred, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type PredictPCLResponse
    let len;
    let data = new PredictPCLResponse(null);
    // Deserialize message field [pred]
    data.pred = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.pred.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'occ_predictor_msgs/PredictPCLResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e39840a6a983f2fa02ea00b2129e3ef6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32[] pred
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new PredictPCLResponse(null);
    if (msg.pred !== undefined) {
      resolved.pred = msg.pred;
    }
    else {
      resolved.pred = []
    }

    return resolved;
    }
};

module.exports = {
  Request: PredictPCLRequest,
  Response: PredictPCLResponse,
  md5sum() { return '1d63e5eadaf190a0779142cc5f3ada89'; },
  datatype() { return 'occ_predictor_msgs/PredictPCL'; }
};
