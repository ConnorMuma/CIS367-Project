extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

	void RegisterModule_Wind();
	RegisterModule_Wind();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; 
class Animator; 
namespace Unity { class ArticulationBody; } 
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; 
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } 
namespace UI { class CanvasGroup; } 
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterUnityClass<FlareLayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; 
class StreamingController; 
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class VideoPlayer; 
class VisualEffect; 
class WindZone; template <> void RegisterUnityClass<WindZone>(const char*);
namespace UI { class CanvasRenderer; } 
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; 
class SphereCollider; 
class TerrainCollider; template <> void RegisterUnityClass<TerrainCollider>(const char*);
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; template <> void RegisterUnityClass<LODGroup>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; 
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; template <> void RegisterUnityClass<BillboardRenderer>(const char*);
class LineRenderer; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; template <> void RegisterUnityClass<Tree>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; template <> void RegisterUnityClass<BillboardAsset>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; 
class AnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RayTracingShader; 
class RuntimeAnimatorController; 
class AnimatorController; 
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
class TerrainLayer; template <> void RegisterUnityClass<TerrainLayer>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class VisualEffectObject; 
class VisualEffectAsset; 
class VisualEffectSubgraph; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; 
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 73 non stripped classes
	//0. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//1. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//2. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//3. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//4. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//5. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//6. BillboardAsset
	RegisterUnityClass<BillboardAsset>("Core");
	//7. BillboardRenderer
	RegisterUnityClass<BillboardRenderer>("Core");
	//8. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//9. Camera
	RegisterUnityClass<Camera>("Core");
	//10. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//11. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//12. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//13. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//14. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//15. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//16. FlareLayer
	RegisterUnityClass<FlareLayer>("Core");
	//17. GameManager
	RegisterUnityClass<GameManager>("Core");
	//18. GameObject
	RegisterUnityClass<GameObject>("Core");
	//19. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//20. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//21. InputManager
	RegisterUnityClass<InputManager>("Core");
	//22. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//23. Light
	RegisterUnityClass<Light>("Core");
	//24. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//25. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//26. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//27. LODGroup
	RegisterUnityClass<LODGroup>("Core");
	//28. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//29. Material
	RegisterUnityClass<Material>("Core");
	//30. Mesh
	RegisterUnityClass<Mesh>("Core");
	//31. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//32. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//33. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//34. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//35. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//36. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//37. Object
	//Skipping Object
	//38. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//39. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//40. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//41. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//42. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//43. Renderer
	RegisterUnityClass<Renderer>("Core");
	//44. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//45. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//46. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//47. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//48. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//49. Shader
	RegisterUnityClass<Shader>("Core");
	//50. Skybox
	RegisterUnityClass<Skybox>("Core");
	//51. Sprite
	RegisterUnityClass<Sprite>("Core");
	//52. TagManager
	RegisterUnityClass<TagManager>("Core");
	//53. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//54. Texture
	RegisterUnityClass<Texture>("Core");
	//55. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//56. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//57. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//58. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//59. Transform
	RegisterUnityClass<Transform>("Core");
	//60. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//61. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//62. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//63. Collider
	RegisterUnityClass<Collider>("Physics");
	//64. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//65. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//66. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//67. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//68. TerrainLayer
	RegisterUnityClass<TerrainLayer>("Terrain");
	//69. Tree
	RegisterUnityClass<Tree>("Terrain");
	//70. TerrainCollider
	RegisterUnityClass<TerrainCollider>("TerrainPhysics");
	//71. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//72. WindZone
	RegisterUnityClass<WindZone>("Wind");

}
