#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Controlador/Petri.o \
	${OBJECTDIR}/Modelo/Matrix.o \
	${OBJECTDIR}/Modelo/Place.o \
	${OBJECTDIR}/Modelo/PlaceList.o \
	${OBJECTDIR}/Modelo/Transition.o \
	${OBJECTDIR}/Modelo/TransitionList.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/rdp

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/rdp: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/rdp ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Controlador/Petri.o: Controlador/Petri.cpp 
	${MKDIR} -p ${OBJECTDIR}/Controlador
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Controlador/Petri.o Controlador/Petri.cpp

${OBJECTDIR}/Modelo/Matrix.o: Modelo/Matrix.cpp 
	${MKDIR} -p ${OBJECTDIR}/Modelo
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modelo/Matrix.o Modelo/Matrix.cpp

${OBJECTDIR}/Modelo/Place.o: Modelo/Place.cpp 
	${MKDIR} -p ${OBJECTDIR}/Modelo
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modelo/Place.o Modelo/Place.cpp

${OBJECTDIR}/Modelo/PlaceList.o: Modelo/PlaceList.cpp 
	${MKDIR} -p ${OBJECTDIR}/Modelo
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modelo/PlaceList.o Modelo/PlaceList.cpp

${OBJECTDIR}/Modelo/Transition.o: Modelo/Transition.cpp 
	${MKDIR} -p ${OBJECTDIR}/Modelo
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modelo/Transition.o Modelo/Transition.cpp

${OBJECTDIR}/Modelo/TransitionList.o: Modelo/TransitionList.cpp 
	${MKDIR} -p ${OBJECTDIR}/Modelo
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modelo/TransitionList.o Modelo/TransitionList.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/rdp

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
