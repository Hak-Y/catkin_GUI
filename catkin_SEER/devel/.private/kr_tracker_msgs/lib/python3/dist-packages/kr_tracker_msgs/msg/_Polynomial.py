# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kr_tracker_msgs/Polynomial.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Polynomial(genpy.Message):
  _md5sum = "364f75c2ff53cd714f15f5974ff407e2"
  _type = "kr_tracker_msgs/Polynomial"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# There should be 1 more coeffs than the degree
int32 degree
float32 dt
uint8 basis
float32[] coeffs"""
  __slots__ = ['degree','dt','basis','coeffs']
  _slot_types = ['int32','float32','uint8','float32[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       degree,dt,basis,coeffs

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Polynomial, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.degree is None:
        self.degree = 0
      if self.dt is None:
        self.dt = 0.
      if self.basis is None:
        self.basis = 0
      if self.coeffs is None:
        self.coeffs = []
    else:
      self.degree = 0
      self.dt = 0.
      self.basis = 0
      self.coeffs = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_ifB().pack(_x.degree, _x.dt, _x.basis))
      length = len(self.coeffs)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.Struct(pattern).pack(*self.coeffs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.degree, _x.dt, _x.basis,) = _get_struct_ifB().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.coeffs = s.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_ifB().pack(_x.degree, _x.dt, _x.basis))
      length = len(self.coeffs)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.coeffs.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.degree, _x.dt, _x.basis,) = _get_struct_ifB().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.coeffs = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_ifB = None
def _get_struct_ifB():
    global _struct_ifB
    if _struct_ifB is None:
        _struct_ifB = struct.Struct("<ifB")
    return _struct_ifB