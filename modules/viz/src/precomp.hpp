#pragma once

#include <map>
#include <ctime>
#include <list>
#include <vector>

#include <Eigen/Geometry>

#if defined __GNUC__
#pragma GCC system_header
#ifdef __DEPRECATED
#undef __DEPRECATED
#define __DEPRECATED_DISABLED__
#endif
#endif

#include <vtkAppendPolyData.h>
#include <vtkAssemblyPath.h>
#include <vtkAxesActor.h>
#include <vtkActor.h>
#include <vtkBoxRepresentation.h>
#include <vtkBoxWidget.h>
#include <vtkBoxWidget2.h>
#include <vtkCellData.h>
#include <vtkMath.h>
#include <vtkLoopSubdivisionFilter.h>
#include <vtkLineSource.h>
#include <vtkLegendScaleActor.h>
#include <vtkLightKit.h>
#include <vtkPlatonicSolidSource.h>
#include <vtkPropPicker.h>
#include <vtkGeneralTransform.h>
#include <vtkSmartPointer.h>
#include <vtkDataSet.h>
#include <vtkDataSetSurfaceFilter.h>
#include <vtkExecutive.h>
#include <vtkPolygon.h>
#include <vtkPointPicker.h>
#include <vtkUnstructuredGrid.h>
#include <vtkConeSource.h>
#include <vtkDiskSource.h>
#include <vtkPlaneSource.h>
#include <vtkSphereSource.h>
#include <vtkArrowSource.h>
#include <vtkOutlineSource.h>
#include <vtkIdentityTransform.h>
#include <vtkTransform.h>
#include <vtkTransformPolyDataFilter.h>
#include <vtkTubeFilter.h>
#include <vtkCubeSource.h>
#include <vtkAxes.h>
#include <vtkFloatArray.h>
#include <vtkDoubleArray.h>
#include <vtkPointData.h>
#include <vtkPolyData.h>
#include <vtkPolyDataReader.h>
#include <vtkPolyDataMapper.h>
#include <vtkDataSetMapper.h>
#include <vtkCellArray.h>
#include <vtkCommand.h>
#include <vtkCellLocator.h>
#include <vtkPLYReader.h>
#include <vtkTransformFilter.h>
#include <vtkPolyLine.h>
#include <vtkVectorText.h>
#include <vtkFollower.h>
#include <vtkCallbackCommand.h>
#include <vtkInteractorStyle.h>
#include <vtkInformationVector.h>
#include <vtkDataArray.h>
#include <vtkUnsignedCharArray.h>
#include <vtkPoints.h>
#include <vtkRendererCollection.h>
#include <vtkPNGWriter.h>
#include <vtkWindowToImageFilter.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkProperty.h>
#include <vtkCamera.h>
#include <vtkObjectFactory.h>
#include <vtkScalarBarActor.h>
#include <vtkScalarsToColors.h>
#include <vtkClipPolyData.h>
#include <vtkPlanes.h>
#include <vtkImageImport.h>
#include <vtkImageViewer.h>
#include <vtkInteractorStyleImage.h>
#include <vtkImageFlip.h>
#include <vtkTIFFWriter.h>
#include <vtkBMPWriter.h>
#include <vtkJPEGWriter.h>
#include <vtkImageViewer2.h>
#include <vtkRenderWindow.h>
#include <vtkXYPlotActor.h>
#include <vtkTextProperty.h>
#include <vtkProperty2D.h>
#include <vtkFieldData.h>
#include <vtkDoubleArray.h>
#include <vtkLODActor.h>
#include <vtkPolyDataWriter.h>
#include <vtkTextActor.h>
#include <vtkCleanPolyData.h>
#include <vtkRenderer.h>
#include <vtkObject.h>
#include <vtkOrientationMarkerWidget.h>
#include <vtkImageReslice.h>
#include <vtkImageChangeInformation.h>
#include <vtkImageCanvasSource2D.h>
#include <vtkImageBlend.h>
#include <vtkImageStencilData.h>
#include <vtkImageActor.h>

#include <vtkRenderWindowInteractor.h>
#include <vtkChartXY.h>
#include <vtkPlot.h>
#include <vtkTable.h>
#include <vtkContextView.h>
#include <vtkContextScene.h>
#include <vtkColorSeries.h>
#include <vtkAxis.h>
#include <vtkSelection.h>
#include <vtkHardwareSelector.h>
#include <vtkTriangle.h>
#include <vtkWorldPointPicker.h>
#include <vtkInteractorStyleRubberBandPick.h>
#include <vtkInteractorStyleTrackballActor.h>
#include <vtkAreaPicker.h>
#include <vtkExtractGeometry.h>
#include <vtkExtractPolyDataGeometry.h>
#include <vtkVertexGlyphFilter.h>
#include <vtkIdFilter.h>
#include <vtkIdTypeArray.h>
#include <vtkImageReader2Factory.h>
#include <vtkImageReader2.h>
#include <vtkImageData.h>
#include <vtkExtractEdges.h>

#include <vtkPolyDataNormals.h>
#include <vtkMapper.h>
#include <vtkSelectionNode.h>
#include <vtkAbstractPicker.h>
#include <vtkAbstractPropPicker.h>
#include <vtkMatrix4x4.h>
#include <vtkInteractorObserver.h>
#include <vtkMapper2D.h>
#include <vtkLeaderActor2D.h>
#include <vtkAlgorithmOutput.h>



#if defined __GNUC__ && defined __DEPRECATED_DISABLED__
#define __DEPRECATED
#undef __DEPRECATED_DISABLED__
#endif


#include "viz3d_impl.hpp"
#include <opencv2/core.hpp>
#include <opencv2/viz.hpp>
#include <opencv2/viz/types.hpp>
#include "opencv2/viz/widget_accessor.hpp"
