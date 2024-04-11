

# true if object exists and information is
# stored in field 'object'. If false, the
# error_code contains more information about the error.
bool success

# information about the object
Object object

# error code if success is false
byte error_code

byte NO_ERROR=0
byte OBJECT_NOT_FOUND=1
byte OTHER_ERROR=2
