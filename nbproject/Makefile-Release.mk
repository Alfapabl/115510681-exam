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
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/AdminCli.o \
	${OBJECTDIR}/AdminGuia.o \
	${OBJECTDIR}/AdminReser.o \
	${OBJECTDIR}/AdminRutas.o \
	${OBJECTDIR}/AdminTripu.o \
	${OBJECTDIR}/AdminVuelo.o \
	${OBJECTDIR}/AgenciaDeViajes.o \
	${OBJECTDIR}/Avion.o \
	${OBJECTDIR}/Cliente.o \
	${OBJECTDIR}/ContenedoraAvion.o \
	${OBJECTDIR}/Fecha.o \
	${OBJECTDIR}/Guia.o \
	${OBJECTDIR}/Hora.o \
	${OBJECTDIR}/Interfaz.o \
	${OBJECTDIR}/ListaReser.o \
	${OBJECTDIR}/ListaTripulante.o \
	${OBJECTDIR}/NodoReser.o \
	${OBJECTDIR}/NodoTripulante.o \
	${OBJECTDIR}/Persona.o \
	${OBJECTDIR}/Reservacion.o \
	${OBJECTDIR}/Ruta.o \
	${OBJECTDIR}/Tripulante.o \
	${OBJECTDIR}/Vuelo.o \
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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/115510681_exam.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/115510681_exam.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/115510681_exam ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/AdminCli.o: AdminCli.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AdminCli.o AdminCli.cpp

${OBJECTDIR}/AdminGuia.o: AdminGuia.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AdminGuia.o AdminGuia.cpp

${OBJECTDIR}/AdminReser.o: AdminReser.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AdminReser.o AdminReser.cpp

${OBJECTDIR}/AdminRutas.o: AdminRutas.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AdminRutas.o AdminRutas.cpp

${OBJECTDIR}/AdminTripu.o: AdminTripu.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AdminTripu.o AdminTripu.cpp

${OBJECTDIR}/AdminVuelo.o: AdminVuelo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AdminVuelo.o AdminVuelo.cpp

${OBJECTDIR}/AgenciaDeViajes.o: AgenciaDeViajes.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AgenciaDeViajes.o AgenciaDeViajes.cpp

${OBJECTDIR}/Avion.o: Avion.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Avion.o Avion.cpp

${OBJECTDIR}/Cliente.o: Cliente.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Cliente.o Cliente.cpp

${OBJECTDIR}/ContenedoraAvion.o: ContenedoraAvion.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ContenedoraAvion.o ContenedoraAvion.cpp

${OBJECTDIR}/Fecha.o: Fecha.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Fecha.o Fecha.cpp

${OBJECTDIR}/Guia.o: Guia.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Guia.o Guia.cpp

${OBJECTDIR}/Hora.o: Hora.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Hora.o Hora.cpp

${OBJECTDIR}/Interfaz.o: Interfaz.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Interfaz.o Interfaz.cpp

${OBJECTDIR}/ListaReser.o: ListaReser.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ListaReser.o ListaReser.cpp

${OBJECTDIR}/ListaTripulante.o: ListaTripulante.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ListaTripulante.o ListaTripulante.cpp

${OBJECTDIR}/NodoReser.o: NodoReser.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/NodoReser.o NodoReser.cpp

${OBJECTDIR}/NodoTripulante.o: NodoTripulante.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/NodoTripulante.o NodoTripulante.cpp

${OBJECTDIR}/Persona.o: Persona.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Persona.o Persona.cpp

${OBJECTDIR}/Reservacion.o: Reservacion.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Reservacion.o Reservacion.cpp

${OBJECTDIR}/Ruta.o: Ruta.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ruta.o Ruta.cpp

${OBJECTDIR}/Tripulante.o: Tripulante.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tripulante.o Tripulante.cpp

${OBJECTDIR}/Vuelo.o: Vuelo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Vuelo.o Vuelo.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
