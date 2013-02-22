#------------------------------------------------------------------------------
#--- Headers for IDE Generators
#
# The following lines add fake targets to register the .h and .ih files in the
# overall project. 
# For IDE generators (Xcode, ...), all H and IH will be recognized as project 
# headers and will thus be parsed and analyzed correctly (e.g. follow declaration
#/implementation, ...)
# 
#------------------------------------------------------------------------------
FILE(GLOB_RECURSE DGTAL_MYHEADERS "*/base/*.*h")
add_custom_target(_base SOURCES ${DGTAL_MYHEADERS})
SET(DGTAL_MYHEADERS "")
FILE(GLOB_RECURSE DGTAL_MYHEADERS "*/math/*.*h")
add_custom_target(_math SOURCES ${DGTAL_MYHEADERS})
SET(DGTAL_MYHEADERS "")
FILE(GLOB_RECURSE DGTAL_MYHEADERS "*/kernel/*.*h")
add_custom_target(_kernel SOURCES ${DGTAL_MYHEADERS})
SET(DGTAL_MYHEADERS "")
FILE(GLOB_RECURSE DGTAL_MYHEADERS "*/topology/*.*h")
add_custom_target(_topology SOURCES ${DGTAL_MYHEADERS})
SET(DGTAL_MYHEADERS "")
FILE(GLOB_RECURSE DGTAL_MYHEADERS "*/geometry/*.*h")
add_custom_target(_geometry SOURCES ${DGTAL_MYHEADERS})
SET(DGTAL_MYHEADERS "")
FILE(GLOB_RECURSE DGTAL_MYHEADERS "*/io/*.*h")
add_custom_target(_io SOURCES ${DGTAL_MYHEADERS})
SET(DGTAL_MYHEADERS "")
FILE(GLOB_RECURSE DGTAL_MYHEADERS "*/images/*.*h")
add_custom_target(_images SOURCES ${DGTAL_MYHEADERS})
SET(DGTAL_MYHEADERS "")
FILE(GLOB_RECURSE DGTAL_MYHEADERS "*/shapes/*.*h")
add_custom_target(_shapes SOURCES ${DGTAL_MYHEADERS})
SET(DGTAL_MYHEADERS "")
FILE(GLOB_RECURSE DGTAL_MYHEADERS "*/arithmetic/*.*h")
add_custom_target(_arithmetic SOURCES ${DGTAL_MYHEADERS})
SET(DGTAL_MYHEADERS "")
FILE(GLOB_RECURSE DGTAL_MYHEADERS "*/graph/*.*h")
add_custom_target(_graph SOURCES ${DGTAL_MYHEADERS})
SET(DGTAL_MYHEADERS "")
FILE(GLOB_RECURSE DGTAL_MYHEADERS "*/helpers/*.*h")
add_custom_target(_helpers SOURCES ${DGTAL_MYHEADERS})
SET(DGTAL_MYHEADERS "")