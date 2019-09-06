#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "IRAudioManager.h"
#import "IRAVPlayer.h"
#import "IRFisheyeParameter.h"
#import "IRMediaParameter.h"
#import "IRMetadataDefine.h"
#import "IRBounceController.h"
#import "IRDeviceShiftController.h"
#import "IRSimulateDeviceShiftController.h"
#import "IRGestureControl.h"
#import "IRGestureController+Private.h"
#import "IRGestureController.h"
#import "IRGLGestureController.h"
#import "UserProfileChangePassword.h"
#import "IRSmoothScrollController.h"
#import "IRMovieDecoder.h"
#import "IRGLFragmentFish2PanoShaderGLSL.h"
#import "IRGLFragmentFish2PerspShaderGLSL.h"
#import "IRGLFragmentNV12ShaderGLSL.h"
#import "IRGLFragmentRGBShaderGLSL.h"
#import "IRGLFragmentYUVShaderGLSL.h"
#import "IRGLDefine.h"
#import "IRGLMath.h"
#import "IRGLSupportPixelFormat.h"
#import "IRGLView.h"
#import "IRGLRenderMode.h"
#import "IRGLRenderMode2D.h"
#import "IRGLRenderMode2DFisheye2Pano.h"
#import "IRGLRenderMode3DFisheye.h"
#import "IRGLRenderModeDistortion.h"
#import "IRGLRenderModeFactory.h"
#import "IRGLRenderModeMulti4P.h"
#import "IRGLRenderModeVR.h"
#import "IRGLFish2PanoShaderParams.h"
#import "IRGLFish2PerspShaderParams.h"
#import "IRGLShaderParams.h"
#import "IRGLProgramDistortion.h"
#import "IRGLProgram2DFactory.h"
#import "IRGLProgram2DFisheye2PanoFactory.h"
#import "IRGLProgram3DFisheye4PFactory.h"
#import "IRGLProgram3DFisheyeFactory.h"
#import "IRGLProgramDistortionFactory.h"
#import "IRGLProgramFactory.h"
#import "IRGLProgramVRFactory.h"
#import "IRGLProgram2D.h"
#import "IRGLProgram2DFisheye2Pano.h"
#import "IRGLProgram2DFisheye2Persp.h"
#import "IRGLProgram3DFisheye.h"
#import "IRGLProgramMulti.h"
#import "IRGLProgramMulti4P.h"
#import "IRGLProgramVR.h"
#import "IRGLProjection.h"
#import "IRGLProjectionDistortion.h"
#import "IRGLProjectionEquirectangular.h"
#import "IRGLProjectionOrthographic.h"
#import "IRGLProjectionVR.h"
#import "IRGLRenderBase.h"
#import "IRGLRenderNV12.h"
#import "IRGLRenderRGB.h"
#import "IRGLRenderYUV.h"
#import "IRGLScope2D.h"
#import "IRGLScope3D.h"
#import "IRGLTransformController.h"
#import "IRGLTransformController2D.h"
#import "IRGLTransformController3DFisheye.h"
#import "IRGLTransformControllerDistortion.h"
#import "IRGLTransformControllerVR.h"
#import "IRGLVertex3DShaderGLSL.h"
#import "IRGLVertexShaderGLSL.h"
#import "IRFFAudioDecoder.h"
#import "IRFFAudioFrame.h"
#import "IRFFDecoder.h"
#import "IRFFFormatContext.h"
#import "IRFFFrame.h"
#import "IRFFFramePool.h"
#import "IRFFFrameQueue.h"
#import "IRFFMetadata.h"
#import "IRFFPacketQueue.h"
#import "IRFFTools.h"
#import "IRFFTrack.h"
#import "IRFFVideoDecoder.h"
#import "IRFFVideoFrame.h"
#import "IRFFVideoToolBox.h"
#import "IRFFPlayer.h"
#import "IRMetamacros.h"
#import "IRPlayerMacro.h"
#import "IRPlayerNotification.h"
#import "IRScope.h"
#import "IRSensor.h"
#import "IRPlayerImp+DisplayView.h"
#import "IRYUVTools.h"
#import "IRPlayerAction.h"
#import "IRPlayerDecoder.h"
#import "IRPlayerImp.h"
#import "IRPlayerTrack.h"
#import "IRPLFImage.h"
#import "IRPLFView.h"
#import "IRPlayer.h"

FOUNDATION_EXPORT double IRPlayerVersionNumber;
FOUNDATION_EXPORT const unsigned char IRPlayerVersionString[];

