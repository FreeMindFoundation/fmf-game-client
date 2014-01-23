BASEDIR=/home/xorentor/git/DOOM-3/neo/
GCC=g++

.SUFFIXES: .cpp .o
.cpp.o:
	$(GCC) -c -D GAME_DLL $*.cpp -o $*.o

ERRORED=\
  $(BASEDIR)game/anim/Anim_Import.o \
  $(BASEDIR)game/gamesys/Callbacks.o \
  $(BASEDIR)game/EndLevel.o

GAMESRC=\
  $(BASEDIR)game/AF.o \
  $(BASEDIR)game/AFEntity.o \
  $(BASEDIR)game/Actor.o \
  $(BASEDIR)game/BrittleFracture.o \
  $(BASEDIR)game/Camera.o \
  $(BASEDIR)game/Entity.o \
  $(BASEDIR)game/Fx.o \
  $(BASEDIR)game/GameEdit.o \
  $(BASEDIR)game/Game_local.o \
  $(BASEDIR)game/Game_network.o \
  $(BASEDIR)game/IK.o \
  $(BASEDIR)game/Item.o \
  $(BASEDIR)game/Light.o \
  $(BASEDIR)game/Misc.o \
  $(BASEDIR)game/Moveable.o \
  $(BASEDIR)game/Mover.o \
  $(BASEDIR)game/MultiplayerGame.o \
  $(BASEDIR)game/Player.o \
  $(BASEDIR)game/PlayerIcon.o \
  $(BASEDIR)game/PlayerView.o \
  $(BASEDIR)game/Projectile.o \
  $(BASEDIR)game/Pvs.o \
  $(BASEDIR)game/SecurityCamera.o \
  $(BASEDIR)game/SmokeParticles.o \
  $(BASEDIR)game/Sound.o \
  $(BASEDIR)game/Target.o \
  $(BASEDIR)game/Trigger.o \
  $(BASEDIR)game/Weapon.o \
  $(BASEDIR)game/WorldSpawn.o \
  $(BASEDIR)game/ai/AAS.o \
  $(BASEDIR)game/ai/AAS_debug.o \
  $(BASEDIR)game/ai/AAS_pathing.o \
  $(BASEDIR)game/ai/AAS_routing.o \
  $(BASEDIR)game/ai/AI.o \
  $(BASEDIR)game/ai/AI_Vagary.o \
  $(BASEDIR)game/ai/AI_events.o \
  $(BASEDIR)game/ai/AI_pathing.o \
  $(BASEDIR)game/anim/Anim.o \
  $(BASEDIR)game/anim/Anim_Blend.o \
  $(BASEDIR)game/anim/Anim_Testmodel.o \
  $(BASEDIR)game/gamesys/Class.o \
  $(BASEDIR)game/gamesys/DebugGraph.o \
  $(BASEDIR)game/gamesys/Event.o \
  $(BASEDIR)game/gamesys/SaveGame.o \
  $(BASEDIR)game/gamesys/SysCmds.o \
  $(BASEDIR)game/gamesys/SysCvar.o \
  $(BASEDIR)game/gamesys/TypeInfo.o \
  $(BASEDIR)game/physics/Clip.o \
  $(BASEDIR)game/physics/Force.o \
  $(BASEDIR)game/physics/Force_Constant.o \
  $(BASEDIR)game/physics/Force_Drag.o \
  $(BASEDIR)game/physics/Force_Field.o \
  $(BASEDIR)game/physics/Force_Spring.o \
  $(BASEDIR)game/physics/Physics.o \
  $(BASEDIR)game/physics/Physics_AF.o \
  $(BASEDIR)game/physics/Physics_Actor.o \
  $(BASEDIR)game/physics/Physics_Base.o \
  $(BASEDIR)game/physics/Physics_Monster.o \
  $(BASEDIR)game/physics/Physics_Parametric.o \
  $(BASEDIR)game/physics/Physics_Player.o \
  $(BASEDIR)game/physics/Physics_RigidBody.o \
  $(BASEDIR)game/physics/Physics_Static.o \
  $(BASEDIR)game/physics/Physics_StaticMulti.o \
  $(BASEDIR)game/physics/Push.o \
  $(BASEDIR)game/script/Script_Compiler.o \
  $(BASEDIR)game/script/Script_Interpreter.o \
  $(BASEDIR)game/script/Script_Program.o \
  $(BASEDIR)game/script/Script_Thread.o

LIBSRC=\
  $(BASEDIR)idlib/Base64.o \
  $(BASEDIR)idlib/BitMsg.o \
  $(BASEDIR)idlib/CmdArgs.o \
  $(BASEDIR)idlib/Dict.o \
  $(BASEDIR)idlib/Heap.o \
  $(BASEDIR)idlib/LangDict.o \
  $(BASEDIR)idlib/Lexer.o \
  $(BASEDIR)idlib/Lib.o \
  $(BASEDIR)idlib/MapFile.o \
  $(BASEDIR)idlib/Parser.o \
  $(BASEDIR)idlib/Str.o \
  $(BASEDIR)idlib/Timer.o \
  $(BASEDIR)idlib/Token.o \
  $(BASEDIR)idlib/bv/Bounds.o \
  $(BASEDIR)idlib/bv/Box.o \
  $(BASEDIR)idlib/bv/Frustum.o \
  $(BASEDIR)idlib/bv/Sphere.o \
  $(BASEDIR)idlib/containers/HashIndex.o \
  $(BASEDIR)idlib/geometry/DrawVert.o \
  $(BASEDIR)idlib/geometry/JointTransform.o \
  $(BASEDIR)idlib/geometry/Surface.o \
  $(BASEDIR)idlib/geometry/Surface_Patch.o \
  $(BASEDIR)idlib/geometry/Surface_Polytope.o \
  $(BASEDIR)idlib/geometry/Surface_SweptSpline.o \
  $(BASEDIR)idlib/geometry/TraceModel.o \
  $(BASEDIR)idlib/geometry/Winding.o \
  $(BASEDIR)idlib/geometry/Winding2D.o \
  $(BASEDIR)idlib/hashing/CRC32.o \
  $(BASEDIR)idlib/hashing/MD4.o \
  $(BASEDIR)idlib/hashing/MD5.o \
  $(BASEDIR)idlib/math/Angles.o \
  $(BASEDIR)idlib/math/Complex.o \
  $(BASEDIR)idlib/math/Lcp.o \
  $(BASEDIR)idlib/math/Math.o \
  $(BASEDIR)idlib/math/Matrix.o \
  $(BASEDIR)idlib/math/Ode.o \
  $(BASEDIR)idlib/math/Plane.o \
  $(BASEDIR)idlib/math/Pluecker.o \
  $(BASEDIR)idlib/math/Polynomial.o \
  $(BASEDIR)idlib/math/Quat.o \
  $(BASEDIR)idlib/math/Rotation.o \
  $(BASEDIR)idlib/math/Simd.o \
  $(BASEDIR)idlib/math/Simd_3DNow.o \
  $(BASEDIR)idlib/math/Simd_AltiVec.o \
  $(BASEDIR)idlib/math/Simd_Generic.o \
  $(BASEDIR)idlib/math/Simd_MMX.o \
  $(BASEDIR)idlib/math/Simd_SSE.o \
  $(BASEDIR)idlib/math/Simd_SSE2.o \
  $(BASEDIR)idlib/math/Simd_SSE3.o \
  $(BASEDIR)idlib/math/Vector.o

all : game00.pk4

$(BASEDIR)idlib/idlib.a : $(LIBSRC)
	ar r $@ $(LIBSRC)

gamex86.so : $(GAMESRC) $(BASEDIR)idlib/idlib.a
	g++ -shared -o $@ $^

game00.pk4 : gamex86.so
	zip $@ $^; mv $@ ../dev

clean :
	rm gamex86.so game00.pk4 idlib/idlib.a; find . -name \*.o -exec rm {} \;

