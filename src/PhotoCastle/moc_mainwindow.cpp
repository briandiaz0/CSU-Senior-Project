/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[171];
    char stringdata0[4150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "handleMessage"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "message"
QT_MOC_LITERAL(4, 34, 15), // "onImageFiltered"
QT_MOC_LITERAL(5, 50, 5), // "image"
QT_MOC_LITERAL(6, 56, 14), // "setupWorkspace"
QT_MOC_LITERAL(7, 71, 12), // "addZoomCombo"
QT_MOC_LITERAL(8, 84, 12), // "connectTools"
QT_MOC_LITERAL(9, 97, 18), // "addSettingsWidgets"
QT_MOC_LITERAL(10, 116, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(11, 139, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(12, 163, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(13, 187, 26), // "on_actionSave_As_triggered"
QT_MOC_LITERAL(14, 214, 23), // "on_actionText_triggered"
QT_MOC_LITERAL(15, 238, 30), // "on_actionPreferences_triggered"
QT_MOC_LITERAL(16, 269, 28), // "on_toolButtonPointer_clicked"
QT_MOC_LITERAL(17, 298, 28), // "on_toolButtonDropper_clicked"
QT_MOC_LITERAL(18, 327, 25), // "on_toolButtonWand_clicked"
QT_MOC_LITERAL(19, 353, 25), // "on_toolButtonLine_clicked"
QT_MOC_LITERAL(20, 379, 32), // "on_toolButtonPaintBucket_clicked"
QT_MOC_LITERAL(21, 412, 29), // "on_toolButtonSprayCan_clicked"
QT_MOC_LITERAL(22, 442, 31), // "on_toolButtonPaintBrush_clicked"
QT_MOC_LITERAL(23, 474, 34), // "on_toolButtonPaintBrushAdv_cl..."
QT_MOC_LITERAL(24, 509, 26), // "on_toolButtonStamp_clicked"
QT_MOC_LITERAL(25, 536, 25), // "on_toolButtonBlur_clicked"
QT_MOC_LITERAL(26, 562, 27), // "on_toolButtonEraser_clicked"
QT_MOC_LITERAL(27, 590, 27), // "on_toolButtonSmudge_clicked"
QT_MOC_LITERAL(28, 618, 16), // "clearToolpalette"
QT_MOC_LITERAL(29, 635, 23), // "on_actionQuit_triggered"
QT_MOC_LITERAL(30, 659, 28), // "on_actionOil_Paint_triggered"
QT_MOC_LITERAL(31, 688, 35), // "on_actionCharcoal_Drawing_tri..."
QT_MOC_LITERAL(32, 724, 24), // "on_actionClose_triggered"
QT_MOC_LITERAL(33, 749, 28), // "on_actionClose_all_triggered"
QT_MOC_LITERAL(34, 778, 12), // "refreshTools"
QT_MOC_LITERAL(35, 791, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(36, 816, 13), // "setWindowSize"
QT_MOC_LITERAL(37, 830, 21), // "updateRecentFilesMenu"
QT_MOC_LITERAL(38, 852, 9), // "showError"
QT_MOC_LITERAL(39, 862, 28), // "onPointerToolSettingsChanged"
QT_MOC_LITERAL(40, 891, 27), // "onPaintBrushSettingsChanged"
QT_MOC_LITERAL(41, 919, 30), // "onPaintBrushAdvSettingsChanged"
QT_MOC_LITERAL(42, 950, 25), // "onSprayCanSettingsChanged"
QT_MOC_LITERAL(43, 976, 21), // "onLineSettingsChanged"
QT_MOC_LITERAL(44, 998, 26), // "onMagicWandSettingsChanged"
QT_MOC_LITERAL(45, 1025, 22), // "onStampSettingsChanged"
QT_MOC_LITERAL(46, 1048, 21), // "onBlurSettingsChanged"
QT_MOC_LITERAL(47, 1070, 23), // "onEraserSettingsChanged"
QT_MOC_LITERAL(48, 1094, 23), // "onSmudgeSettingsChanged"
QT_MOC_LITERAL(49, 1118, 18), // "onPickPrimaryColor"
QT_MOC_LITERAL(50, 1137, 20), // "onPickSecondaryColor"
QT_MOC_LITERAL(51, 1158, 23), // "onFloodFillPrimaryColor"
QT_MOC_LITERAL(52, 1182, 25), // "onFloodFillSecondaryColor"
QT_MOC_LITERAL(53, 1208, 20), // "onSelectPrimaryColor"
QT_MOC_LITERAL(54, 1229, 6), // "onCrop"
QT_MOC_LITERAL(55, 1236, 6), // "onCopy"
QT_MOC_LITERAL(56, 1243, 7), // "onPaste"
QT_MOC_LITERAL(57, 1251, 37), // "on_actionPaste_as_new_image_t..."
QT_MOC_LITERAL(58, 1289, 13), // "onZoomChanged"
QT_MOC_LITERAL(59, 1303, 20), // "onSubWindowActivated"
QT_MOC_LITERAL(60, 1324, 14), // "QMdiSubWindow*"
QT_MOC_LITERAL(61, 1339, 10), // "onEditText"
QT_MOC_LITERAL(62, 1350, 18), // "onTextToolFinished"
QT_MOC_LITERAL(63, 1369, 24), // "onMultiWindowModeChanged"
QT_MOC_LITERAL(64, 1394, 24), // "on_actionSwirl_triggered"
QT_MOC_LITERAL(65, 1419, 28), // "on_actionGrayScale_triggered"
QT_MOC_LITERAL(66, 1448, 32), // "on_actionFlip_Vertical_triggered"
QT_MOC_LITERAL(67, 1481, 34), // "on_actionFlip_Horizontal_trig..."
QT_MOC_LITERAL(68, 1516, 29), // "on_actionRotate_CCW_triggered"
QT_MOC_LITERAL(69, 1546, 28), // "on_actionRotate_CW_triggered"
QT_MOC_LITERAL(70, 1575, 29), // "on_actionImage_Size_triggered"
QT_MOC_LITERAL(71, 1605, 28), // "on_actionFilterbar_triggered"
QT_MOC_LITERAL(72, 1634, 30), // "on_actionToolpalette_triggered"
QT_MOC_LITERAL(73, 1665, 26), // "on_actionZoom_in_triggered"
QT_MOC_LITERAL(74, 1692, 27), // "on_actionZoom_out_triggered"
QT_MOC_LITERAL(75, 1720, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(76, 1744, 23), // "on_actionRedo_triggered"
QT_MOC_LITERAL(77, 1768, 24), // "on_actionPrint_triggered"
QT_MOC_LITERAL(78, 1793, 30), // "on_actionFull_screen_triggered"
QT_MOC_LITERAL(79, 1824, 32), // "on_actionOriginal_size_triggered"
QT_MOC_LITERAL(80, 1857, 27), // "on_actionSolarize_triggered"
QT_MOC_LITERAL(81, 1885, 23), // "on_actionWave_triggered"
QT_MOC_LITERAL(82, 1909, 26), // "on_actionImplode_triggered"
QT_MOC_LITERAL(83, 1936, 25), // "on_actionSoften_triggered"
QT_MOC_LITERAL(84, 1962, 23), // "on_actionBlur_triggered"
QT_MOC_LITERAL(85, 1986, 26), // "on_actionSharpen_triggered"
QT_MOC_LITERAL(86, 2013, 28), // "on_actionReinforce_triggered"
QT_MOC_LITERAL(87, 2042, 35), // "on_actionImage_properties_tri..."
QT_MOC_LITERAL(88, 2078, 33), // "on_actionAutomate_Batch_trigg..."
QT_MOC_LITERAL(89, 2112, 33), // "on_actionShow_selection_trigg..."
QT_MOC_LITERAL(90, 2146, 7), // "checked"
QT_MOC_LITERAL(91, 2154, 30), // "on_actionCanvas_Size_triggered"
QT_MOC_LITERAL(92, 2185, 25), // "on_actionRevert_triggered"
QT_MOC_LITERAL(93, 2211, 29), // "on_actionBrightplus_triggered"
QT_MOC_LITERAL(94, 2241, 30), // "on_actionBrightminus_triggered"
QT_MOC_LITERAL(95, 2272, 31), // "on_actionContrastplus_triggered"
QT_MOC_LITERAL(96, 2304, 32), // "on_actionContrastminus_triggered"
QT_MOC_LITERAL(97, 2337, 35), // "on_actionGammaCorrectplus_tri..."
QT_MOC_LITERAL(98, 2373, 36), // "on_actionGammaCorrectminus_tr..."
QT_MOC_LITERAL(99, 2410, 33), // "on_actionSaturationplus_trigg..."
QT_MOC_LITERAL(100, 2444, 34), // "on_actionSaturationminus_trig..."
QT_MOC_LITERAL(101, 2479, 27), // "on_actionOldPhoto_triggered"
QT_MOC_LITERAL(102, 2507, 32), // "on_actionDustReduction_triggered"
QT_MOC_LITERAL(103, 2540, 32), // "on_actionOutside_frame_triggered"
QT_MOC_LITERAL(104, 2573, 25), // "on_actionEmboss_triggered"
QT_MOC_LITERAL(105, 2599, 27), // "on_actionGaussian_triggered"
QT_MOC_LITERAL(106, 2627, 26), // "on_actionImpulse_triggered"
QT_MOC_LITERAL(107, 2654, 28), // "on_actionLaplacian_triggered"
QT_MOC_LITERAL(108, 2683, 26), // "on_actionPoisson_triggered"
QT_MOC_LITERAL(109, 2710, 32), // "on_actionMonoChromatic_triggered"
QT_MOC_LITERAL(110, 2743, 27), // "on_actionEqualize_triggered"
QT_MOC_LITERAL(111, 2771, 33), // "on_actionCrop_To_Center_trigg..."
QT_MOC_LITERAL(112, 2805, 35), // "on_actionAdd_Simple_Frame_tri..."
QT_MOC_LITERAL(113, 2841, 30), // "on_actionMotion_blur_triggered"
QT_MOC_LITERAL(114, 2872, 28), // "on_actionNormalize_triggered"
QT_MOC_LITERAL(115, 2901, 27), // "on_action3D_frame_triggered"
QT_MOC_LITERAL(116, 2929, 26), // "on_actionExplode_triggered"
QT_MOC_LITERAL(117, 2956, 28), // "on_actionDespeckle_triggered"
QT_MOC_LITERAL(118, 2985, 24), // "on_actionSepia_triggered"
QT_MOC_LITERAL(119, 3010, 30), // "on_actionAuto_levels_triggered"
QT_MOC_LITERAL(120, 3041, 32), // "on_actionAuto_contrast_triggered"
QT_MOC_LITERAL(121, 3074, 32), // "batchProcess_fileProcessFinished"
QT_MOC_LITERAL(122, 3107, 4), // "file"
QT_MOC_LITERAL(123, 3112, 26), // "batchProcess_batchProgress"
QT_MOC_LITERAL(124, 3139, 5), // "index"
QT_MOC_LITERAL(125, 3145, 5), // "total"
QT_MOC_LITERAL(126, 3151, 32), // "on_actionHue_variation_triggered"
QT_MOC_LITERAL(127, 3184, 19), // "onHuePreviewChanged"
QT_MOC_LITERAL(128, 3204, 8), // "colorize"
QT_MOC_LITERAL(129, 3213, 5), // "color"
QT_MOC_LITERAL(130, 3219, 7), // "degrees"
QT_MOC_LITERAL(131, 3227, 20), // "onPreviewTransparent"
QT_MOC_LITERAL(132, 3248, 9), // "tolerance"
QT_MOC_LITERAL(133, 3258, 21), // "onTransparentFinished"
QT_MOC_LITERAL(134, 3280, 21), // "onTransparentAccepted"
QT_MOC_LITERAL(135, 3302, 21), // "onTransparentRejected"
QT_MOC_LITERAL(136, 3324, 27), // "on_actionGradient_triggered"
QT_MOC_LITERAL(137, 3352, 23), // "on_actionCrop_triggered"
QT_MOC_LITERAL(138, 3376, 18), // "onSelectionChanged"
QT_MOC_LITERAL(139, 3395, 7), // "visible"
QT_MOC_LITERAL(140, 3403, 24), // "on_actionPaste_triggered"
QT_MOC_LITERAL(141, 3428, 23), // "on_actionCopy_triggered"
QT_MOC_LITERAL(142, 3452, 37), // "on_actionTransparent_colour_t..."
QT_MOC_LITERAL(143, 3490, 31), // "on_actionIndexed_Mode_triggered"
QT_MOC_LITERAL(144, 3522, 27), // "on_actionRGB_Mode_triggered"
QT_MOC_LITERAL(145, 3550, 25), // "on_actionDonate_triggered"
QT_MOC_LITERAL(146, 3576, 33), // "on_actionAutomatic_Crop_trigg..."
QT_MOC_LITERAL(147, 3610, 27), // "on_actionNegative_triggered"
QT_MOC_LITERAL(148, 3638, 34), // "on_actionBlack_and_white_trig..."
QT_MOC_LITERAL(149, 3673, 10), // "fileExists"
QT_MOC_LITERAL(150, 3684, 4), // "path"
QT_MOC_LITERAL(151, 3689, 38), // "on_actionOutside_drop_shadow_..."
QT_MOC_LITERAL(152, 3728, 26), // "on_actionOpacity_triggered"
QT_MOC_LITERAL(153, 3755, 26), // "on_actionPlugins_triggered"
QT_MOC_LITERAL(154, 3782, 36), // "on_actionCheck_for_updates_tr..."
QT_MOC_LITERAL(155, 3819, 23), // "onShowHotspotsTriggered"
QT_MOC_LITERAL(156, 3843, 29), // "on_actionSelect_all_triggered"
QT_MOC_LITERAL(157, 3873, 35), // "on_actionColour_Threshold_tri..."
QT_MOC_LITERAL(158, 3909, 31), // "on_actionClearHistory_triggered"
QT_MOC_LITERAL(159, 3941, 33), // "on_actionClearClipboard_trigg..."
QT_MOC_LITERAL(160, 3975, 28), // "on_actionDuplicate_triggered"
QT_MOC_LITERAL(161, 4004, 28), // "on_actionShow_grid_triggered"
QT_MOC_LITERAL(162, 4033, 11), // "prepareFile"
QT_MOC_LITERAL(163, 4045, 8), // "fileName"
QT_MOC_LITERAL(164, 4054, 17), // "fileTypeSupported"
QT_MOC_LITERAL(165, 4072, 7), // "formats"
QT_MOC_LITERAL(166, 4080, 3), // "ext"
QT_MOC_LITERAL(167, 4084, 20), // "getNextZoomFromScale"
QT_MOC_LITERAL(168, 4105, 9), // "scaletext"
QT_MOC_LITERAL(169, 4115, 20), // "getPrevZoomFromScale"
QT_MOC_LITERAL(170, 4136, 13) // "onSafeQuitApp"

    },
    "MainWindow\0handleMessage\0\0message\0"
    "onImageFiltered\0image\0setupWorkspace\0"
    "addZoomCombo\0connectTools\0addSettingsWidgets\0"
    "on_actionNew_triggered\0on_actionOpen_triggered\0"
    "on_actionSave_triggered\0"
    "on_actionSave_As_triggered\0"
    "on_actionText_triggered\0"
    "on_actionPreferences_triggered\0"
    "on_toolButtonPointer_clicked\0"
    "on_toolButtonDropper_clicked\0"
    "on_toolButtonWand_clicked\0"
    "on_toolButtonLine_clicked\0"
    "on_toolButtonPaintBucket_clicked\0"
    "on_toolButtonSprayCan_clicked\0"
    "on_toolButtonPaintBrush_clicked\0"
    "on_toolButtonPaintBrushAdv_clicked\0"
    "on_toolButtonStamp_clicked\0"
    "on_toolButtonBlur_clicked\0"
    "on_toolButtonEraser_clicked\0"
    "on_toolButtonSmudge_clicked\0"
    "clearToolpalette\0on_actionQuit_triggered\0"
    "on_actionOil_Paint_triggered\0"
    "on_actionCharcoal_Drawing_triggered\0"
    "on_actionClose_triggered\0"
    "on_actionClose_all_triggered\0refreshTools\0"
    "on_actionAbout_triggered\0setWindowSize\0"
    "updateRecentFilesMenu\0showError\0"
    "onPointerToolSettingsChanged\0"
    "onPaintBrushSettingsChanged\0"
    "onPaintBrushAdvSettingsChanged\0"
    "onSprayCanSettingsChanged\0"
    "onLineSettingsChanged\0onMagicWandSettingsChanged\0"
    "onStampSettingsChanged\0onBlurSettingsChanged\0"
    "onEraserSettingsChanged\0onSmudgeSettingsChanged\0"
    "onPickPrimaryColor\0onPickSecondaryColor\0"
    "onFloodFillPrimaryColor\0"
    "onFloodFillSecondaryColor\0"
    "onSelectPrimaryColor\0onCrop\0onCopy\0"
    "onPaste\0on_actionPaste_as_new_image_triggered\0"
    "onZoomChanged\0onSubWindowActivated\0"
    "QMdiSubWindow*\0onEditText\0onTextToolFinished\0"
    "onMultiWindowModeChanged\0"
    "on_actionSwirl_triggered\0"
    "on_actionGrayScale_triggered\0"
    "on_actionFlip_Vertical_triggered\0"
    "on_actionFlip_Horizontal_triggered\0"
    "on_actionRotate_CCW_triggered\0"
    "on_actionRotate_CW_triggered\0"
    "on_actionImage_Size_triggered\0"
    "on_actionFilterbar_triggered\0"
    "on_actionToolpalette_triggered\0"
    "on_actionZoom_in_triggered\0"
    "on_actionZoom_out_triggered\0"
    "on_actionUndo_triggered\0on_actionRedo_triggered\0"
    "on_actionPrint_triggered\0"
    "on_actionFull_screen_triggered\0"
    "on_actionOriginal_size_triggered\0"
    "on_actionSolarize_triggered\0"
    "on_actionWave_triggered\0"
    "on_actionImplode_triggered\0"
    "on_actionSoften_triggered\0"
    "on_actionBlur_triggered\0"
    "on_actionSharpen_triggered\0"
    "on_actionReinforce_triggered\0"
    "on_actionImage_properties_triggered\0"
    "on_actionAutomate_Batch_triggered\0"
    "on_actionShow_selection_triggered\0"
    "checked\0on_actionCanvas_Size_triggered\0"
    "on_actionRevert_triggered\0"
    "on_actionBrightplus_triggered\0"
    "on_actionBrightminus_triggered\0"
    "on_actionContrastplus_triggered\0"
    "on_actionContrastminus_triggered\0"
    "on_actionGammaCorrectplus_triggered\0"
    "on_actionGammaCorrectminus_triggered\0"
    "on_actionSaturationplus_triggered\0"
    "on_actionSaturationminus_triggered\0"
    "on_actionOldPhoto_triggered\0"
    "on_actionDustReduction_triggered\0"
    "on_actionOutside_frame_triggered\0"
    "on_actionEmboss_triggered\0"
    "on_actionGaussian_triggered\0"
    "on_actionImpulse_triggered\0"
    "on_actionLaplacian_triggered\0"
    "on_actionPoisson_triggered\0"
    "on_actionMonoChromatic_triggered\0"
    "on_actionEqualize_triggered\0"
    "on_actionCrop_To_Center_triggered\0"
    "on_actionAdd_Simple_Frame_triggered\0"
    "on_actionMotion_blur_triggered\0"
    "on_actionNormalize_triggered\0"
    "on_action3D_frame_triggered\0"
    "on_actionExplode_triggered\0"
    "on_actionDespeckle_triggered\0"
    "on_actionSepia_triggered\0"
    "on_actionAuto_levels_triggered\0"
    "on_actionAuto_contrast_triggered\0"
    "batchProcess_fileProcessFinished\0file\0"
    "batchProcess_batchProgress\0index\0total\0"
    "on_actionHue_variation_triggered\0"
    "onHuePreviewChanged\0colorize\0color\0"
    "degrees\0onPreviewTransparent\0tolerance\0"
    "onTransparentFinished\0onTransparentAccepted\0"
    "onTransparentRejected\0on_actionGradient_triggered\0"
    "on_actionCrop_triggered\0onSelectionChanged\0"
    "visible\0on_actionPaste_triggered\0"
    "on_actionCopy_triggered\0"
    "on_actionTransparent_colour_triggered\0"
    "on_actionIndexed_Mode_triggered\0"
    "on_actionRGB_Mode_triggered\0"
    "on_actionDonate_triggered\0"
    "on_actionAutomatic_Crop_triggered\0"
    "on_actionNegative_triggered\0"
    "on_actionBlack_and_white_triggered\0"
    "fileExists\0path\0on_actionOutside_drop_shadow_triggered\0"
    "on_actionOpacity_triggered\0"
    "on_actionPlugins_triggered\0"
    "on_actionCheck_for_updates_triggered\0"
    "onShowHotspotsTriggered\0"
    "on_actionSelect_all_triggered\0"
    "on_actionColour_Threshold_triggered\0"
    "on_actionClearHistory_triggered\0"
    "on_actionClearClipboard_triggered\0"
    "on_actionDuplicate_triggered\0"
    "on_actionShow_grid_triggered\0prepareFile\0"
    "fileName\0fileTypeSupported\0formats\0"
    "ext\0getNextZoomFromScale\0scaletext\0"
    "getPrevZoomFromScale\0onSafeQuitApp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     152,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  774,    2, 0x0a /* Public */,
       4,    1,  777,    2, 0x0a /* Public */,
       6,    0,  780,    2, 0x08 /* Private */,
       7,    0,  781,    2, 0x08 /* Private */,
       8,    0,  782,    2, 0x08 /* Private */,
       9,    0,  783,    2, 0x08 /* Private */,
      10,    0,  784,    2, 0x08 /* Private */,
      11,    0,  785,    2, 0x08 /* Private */,
      12,    0,  786,    2, 0x08 /* Private */,
      13,    0,  787,    2, 0x08 /* Private */,
      14,    0,  788,    2, 0x08 /* Private */,
      15,    0,  789,    2, 0x08 /* Private */,
      16,    0,  790,    2, 0x08 /* Private */,
      17,    0,  791,    2, 0x08 /* Private */,
      18,    0,  792,    2, 0x08 /* Private */,
      19,    0,  793,    2, 0x08 /* Private */,
      20,    0,  794,    2, 0x08 /* Private */,
      21,    0,  795,    2, 0x08 /* Private */,
      22,    0,  796,    2, 0x08 /* Private */,
      23,    0,  797,    2, 0x08 /* Private */,
      24,    0,  798,    2, 0x08 /* Private */,
      25,    0,  799,    2, 0x08 /* Private */,
      26,    0,  800,    2, 0x08 /* Private */,
      27,    0,  801,    2, 0x08 /* Private */,
      28,    0,  802,    2, 0x08 /* Private */,
      29,    0,  803,    2, 0x08 /* Private */,
      30,    0,  804,    2, 0x08 /* Private */,
      31,    0,  805,    2, 0x08 /* Private */,
      32,    0,  806,    2, 0x08 /* Private */,
      33,    0,  807,    2, 0x08 /* Private */,
      34,    0,  808,    2, 0x08 /* Private */,
      35,    0,  809,    2, 0x08 /* Private */,
      36,    0,  810,    2, 0x08 /* Private */,
      37,    0,  811,    2, 0x08 /* Private */,
      38,    1,  812,    2, 0x08 /* Private */,
      39,    0,  815,    2, 0x08 /* Private */,
      40,    0,  816,    2, 0x08 /* Private */,
      41,    0,  817,    2, 0x08 /* Private */,
      42,    0,  818,    2, 0x08 /* Private */,
      43,    0,  819,    2, 0x08 /* Private */,
      44,    0,  820,    2, 0x08 /* Private */,
      45,    0,  821,    2, 0x08 /* Private */,
      46,    0,  822,    2, 0x08 /* Private */,
      47,    0,  823,    2, 0x08 /* Private */,
      48,    0,  824,    2, 0x08 /* Private */,
      49,    1,  825,    2, 0x08 /* Private */,
      50,    1,  828,    2, 0x08 /* Private */,
      51,    1,  831,    2, 0x08 /* Private */,
      52,    1,  834,    2, 0x08 /* Private */,
      53,    3,  837,    2, 0x08 /* Private */,
      54,    1,  844,    2, 0x08 /* Private */,
      55,    0,  847,    2, 0x08 /* Private */,
      56,    0,  848,    2, 0x08 /* Private */,
      57,    0,  849,    2, 0x08 /* Private */,
      58,    1,  850,    2, 0x08 /* Private */,
      59,    1,  853,    2, 0x08 /* Private */,
      61,    3,  856,    2, 0x08 /* Private */,
      62,    0,  863,    2, 0x08 /* Private */,
      63,    1,  864,    2, 0x08 /* Private */,
      64,    0,  867,    2, 0x08 /* Private */,
      65,    0,  868,    2, 0x08 /* Private */,
      66,    0,  869,    2, 0x08 /* Private */,
      67,    0,  870,    2, 0x08 /* Private */,
      68,    0,  871,    2, 0x08 /* Private */,
      69,    0,  872,    2, 0x08 /* Private */,
      70,    0,  873,    2, 0x08 /* Private */,
      71,    0,  874,    2, 0x08 /* Private */,
      72,    0,  875,    2, 0x08 /* Private */,
      73,    0,  876,    2, 0x08 /* Private */,
      74,    0,  877,    2, 0x08 /* Private */,
      75,    0,  878,    2, 0x08 /* Private */,
      76,    0,  879,    2, 0x08 /* Private */,
      77,    0,  880,    2, 0x08 /* Private */,
      78,    0,  881,    2, 0x08 /* Private */,
      79,    0,  882,    2, 0x08 /* Private */,
      80,    0,  883,    2, 0x08 /* Private */,
      81,    0,  884,    2, 0x08 /* Private */,
      82,    0,  885,    2, 0x08 /* Private */,
      83,    0,  886,    2, 0x08 /* Private */,
      84,    0,  887,    2, 0x08 /* Private */,
      85,    0,  888,    2, 0x08 /* Private */,
      86,    0,  889,    2, 0x08 /* Private */,
      87,    0,  890,    2, 0x08 /* Private */,
      88,    0,  891,    2, 0x08 /* Private */,
      89,    1,  892,    2, 0x08 /* Private */,
      91,    0,  895,    2, 0x08 /* Private */,
      92,    0,  896,    2, 0x08 /* Private */,
      93,    0,  897,    2, 0x08 /* Private */,
      94,    0,  898,    2, 0x08 /* Private */,
      95,    0,  899,    2, 0x08 /* Private */,
      96,    0,  900,    2, 0x08 /* Private */,
      97,    0,  901,    2, 0x08 /* Private */,
      98,    0,  902,    2, 0x08 /* Private */,
      99,    0,  903,    2, 0x08 /* Private */,
     100,    0,  904,    2, 0x08 /* Private */,
     101,    0,  905,    2, 0x08 /* Private */,
     102,    0,  906,    2, 0x08 /* Private */,
     103,    0,  907,    2, 0x08 /* Private */,
     104,    0,  908,    2, 0x08 /* Private */,
     105,    0,  909,    2, 0x08 /* Private */,
     106,    0,  910,    2, 0x08 /* Private */,
     107,    0,  911,    2, 0x08 /* Private */,
     108,    0,  912,    2, 0x08 /* Private */,
     109,    0,  913,    2, 0x08 /* Private */,
     110,    0,  914,    2, 0x08 /* Private */,
     111,    0,  915,    2, 0x08 /* Private */,
     112,    0,  916,    2, 0x08 /* Private */,
     113,    0,  917,    2, 0x08 /* Private */,
     114,    0,  918,    2, 0x08 /* Private */,
     115,    0,  919,    2, 0x08 /* Private */,
     116,    0,  920,    2, 0x08 /* Private */,
     117,    0,  921,    2, 0x08 /* Private */,
     118,    0,  922,    2, 0x08 /* Private */,
     119,    0,  923,    2, 0x08 /* Private */,
     120,    0,  924,    2, 0x08 /* Private */,
     121,    2,  925,    2, 0x08 /* Private */,
     123,    2,  930,    2, 0x08 /* Private */,
     126,    0,  935,    2, 0x08 /* Private */,
     127,    4,  936,    2, 0x08 /* Private */,
     131,    2,  945,    2, 0x08 /* Private */,
     133,    0,  950,    2, 0x08 /* Private */,
     134,    0,  951,    2, 0x08 /* Private */,
     135,    0,  952,    2, 0x08 /* Private */,
     136,    0,  953,    2, 0x08 /* Private */,
     137,    0,  954,    2, 0x08 /* Private */,
     138,    1,  955,    2, 0x08 /* Private */,
     140,    0,  958,    2, 0x08 /* Private */,
     141,    0,  959,    2, 0x08 /* Private */,
     142,    0,  960,    2, 0x08 /* Private */,
     143,    0,  961,    2, 0x08 /* Private */,
     144,    0,  962,    2, 0x08 /* Private */,
     145,    0,  963,    2, 0x08 /* Private */,
     146,    0,  964,    2, 0x08 /* Private */,
     147,    0,  965,    2, 0x08 /* Private */,
     148,    0,  966,    2, 0x08 /* Private */,
     149,    1,  967,    2, 0x08 /* Private */,
     151,    0,  970,    2, 0x08 /* Private */,
     152,    0,  971,    2, 0x08 /* Private */,
     153,    0,  972,    2, 0x08 /* Private */,
     154,    0,  973,    2, 0x08 /* Private */,
     155,    0,  974,    2, 0x08 /* Private */,
     156,    0,  975,    2, 0x08 /* Private */,
     157,    0,  976,    2, 0x08 /* Private */,
     158,    0,  977,    2, 0x08 /* Private */,
     159,    0,  978,    2, 0x08 /* Private */,
     160,    0,  979,    2, 0x08 /* Private */,
     161,    0,  980,    2, 0x08 /* Private */,
     162,    1,  981,    2, 0x08 /* Private */,
     164,    2,  984,    2, 0x08 /* Private */,
     167,    1,  989,    2, 0x08 /* Private */,
     169,    1,  992,    2, 0x08 /* Private */,
     170,    0,  995,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint, QMetaType::Int, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, QMetaType::QRect,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 60,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QFont, QMetaType::QColor,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   90,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QImage,  122,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  124,  125,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage, QMetaType::Bool, QMetaType::QColor, QMetaType::Int,    5,  128,  129,  130,
    QMetaType::Void, QMetaType::QColor, QMetaType::Int,  129,  132,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  139,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,  150,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,  163,
    QMetaType::Bool, QMetaType::QByteArrayList, QMetaType::QString,  165,  166,
    QMetaType::Void, QMetaType::QString,  168,
    QMetaType::Void, QMetaType::QString,  168,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onImageFiltered((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 2: _t->setupWorkspace(); break;
        case 3: _t->addZoomCombo(); break;
        case 4: _t->connectTools(); break;
        case 5: _t->addSettingsWidgets(); break;
        case 6: _t->on_actionNew_triggered(); break;
        case 7: _t->on_actionOpen_triggered(); break;
        case 8: _t->on_actionSave_triggered(); break;
        case 9: _t->on_actionSave_As_triggered(); break;
        case 10: _t->on_actionText_triggered(); break;
        case 11: _t->on_actionPreferences_triggered(); break;
        case 12: _t->on_toolButtonPointer_clicked(); break;
        case 13: _t->on_toolButtonDropper_clicked(); break;
        case 14: _t->on_toolButtonWand_clicked(); break;
        case 15: _t->on_toolButtonLine_clicked(); break;
        case 16: _t->on_toolButtonPaintBucket_clicked(); break;
        case 17: _t->on_toolButtonSprayCan_clicked(); break;
        case 18: _t->on_toolButtonPaintBrush_clicked(); break;
        case 19: _t->on_toolButtonPaintBrushAdv_clicked(); break;
        case 20: _t->on_toolButtonStamp_clicked(); break;
        case 21: _t->on_toolButtonBlur_clicked(); break;
        case 22: _t->on_toolButtonEraser_clicked(); break;
        case 23: _t->on_toolButtonSmudge_clicked(); break;
        case 24: _t->clearToolpalette(); break;
        case 25: _t->on_actionQuit_triggered(); break;
        case 26: _t->on_actionOil_Paint_triggered(); break;
        case 27: _t->on_actionCharcoal_Drawing_triggered(); break;
        case 28: _t->on_actionClose_triggered(); break;
        case 29: _t->on_actionClose_all_triggered(); break;
        case 30: _t->refreshTools(); break;
        case 31: _t->on_actionAbout_triggered(); break;
        case 32: _t->setWindowSize(); break;
        case 33: _t->updateRecentFilesMenu(); break;
        case 34: _t->showError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->onPointerToolSettingsChanged(); break;
        case 36: _t->onPaintBrushSettingsChanged(); break;
        case 37: _t->onPaintBrushAdvSettingsChanged(); break;
        case 38: _t->onSprayCanSettingsChanged(); break;
        case 39: _t->onLineSettingsChanged(); break;
        case 40: _t->onMagicWandSettingsChanged(); break;
        case 41: _t->onStampSettingsChanged(); break;
        case 42: _t->onBlurSettingsChanged(); break;
        case 43: _t->onEraserSettingsChanged(); break;
        case 44: _t->onSmudgeSettingsChanged(); break;
        case 45: _t->onPickPrimaryColor((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 46: _t->onPickSecondaryColor((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 47: _t->onFloodFillPrimaryColor((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 48: _t->onFloodFillSecondaryColor((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 49: _t->onSelectPrimaryColor((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 50: _t->onCrop((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 51: _t->onCopy(); break;
        case 52: _t->onPaste(); break;
        case 53: _t->on_actionPaste_as_new_image_triggered(); break;
        case 54: _t->onZoomChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 55: _t->onSubWindowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 56: _t->onEditText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 57: _t->onTextToolFinished(); break;
        case 58: _t->onMultiWindowModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->on_actionSwirl_triggered(); break;
        case 60: _t->on_actionGrayScale_triggered(); break;
        case 61: _t->on_actionFlip_Vertical_triggered(); break;
        case 62: _t->on_actionFlip_Horizontal_triggered(); break;
        case 63: _t->on_actionRotate_CCW_triggered(); break;
        case 64: _t->on_actionRotate_CW_triggered(); break;
        case 65: _t->on_actionImage_Size_triggered(); break;
        case 66: _t->on_actionFilterbar_triggered(); break;
        case 67: _t->on_actionToolpalette_triggered(); break;
        case 68: _t->on_actionZoom_in_triggered(); break;
        case 69: _t->on_actionZoom_out_triggered(); break;
        case 70: _t->on_actionUndo_triggered(); break;
        case 71: _t->on_actionRedo_triggered(); break;
        case 72: _t->on_actionPrint_triggered(); break;
        case 73: _t->on_actionFull_screen_triggered(); break;
        case 74: _t->on_actionOriginal_size_triggered(); break;
        case 75: _t->on_actionSolarize_triggered(); break;
        case 76: _t->on_actionWave_triggered(); break;
        case 77: _t->on_actionImplode_triggered(); break;
        case 78: _t->on_actionSoften_triggered(); break;
        case 79: _t->on_actionBlur_triggered(); break;
        case 80: _t->on_actionSharpen_triggered(); break;
        case 81: _t->on_actionReinforce_triggered(); break;
        case 82: _t->on_actionImage_properties_triggered(); break;
        case 83: _t->on_actionAutomate_Batch_triggered(); break;
        case 84: _t->on_actionShow_selection_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: _t->on_actionCanvas_Size_triggered(); break;
        case 86: _t->on_actionRevert_triggered(); break;
        case 87: _t->on_actionBrightplus_triggered(); break;
        case 88: _t->on_actionBrightminus_triggered(); break;
        case 89: _t->on_actionContrastplus_triggered(); break;
        case 90: _t->on_actionContrastminus_triggered(); break;
        case 91: _t->on_actionGammaCorrectplus_triggered(); break;
        case 92: _t->on_actionGammaCorrectminus_triggered(); break;
        case 93: _t->on_actionSaturationplus_triggered(); break;
        case 94: _t->on_actionSaturationminus_triggered(); break;
        case 95: _t->on_actionOldPhoto_triggered(); break;
        case 96: _t->on_actionDustReduction_triggered(); break;
        case 97: _t->on_actionOutside_frame_triggered(); break;
        case 98: _t->on_actionEmboss_triggered(); break;
        case 99: _t->on_actionGaussian_triggered(); break;
        case 100: _t->on_actionImpulse_triggered(); break;
        case 101: _t->on_actionLaplacian_triggered(); break;
        case 102: _t->on_actionPoisson_triggered(); break;
        case 103: _t->on_actionMonoChromatic_triggered(); break;
        case 104: _t->on_actionEqualize_triggered(); break;
        case 105: _t->on_actionCrop_To_Center_triggered(); break;
        case 106: _t->on_actionAdd_Simple_Frame_triggered(); break;
        case 107: _t->on_actionMotion_blur_triggered(); break;
        case 108: _t->on_actionNormalize_triggered(); break;
        case 109: _t->on_action3D_frame_triggered(); break;
        case 110: _t->on_actionExplode_triggered(); break;
        case 111: _t->on_actionDespeckle_triggered(); break;
        case 112: _t->on_actionSepia_triggered(); break;
        case 113: _t->on_actionAuto_levels_triggered(); break;
        case 114: _t->on_actionAuto_contrast_triggered(); break;
        case 115: _t->batchProcess_fileProcessFinished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 116: _t->batchProcess_batchProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 117: _t->on_actionHue_variation_triggered(); break;
        case 118: _t->onHuePreviewChanged((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 119: _t->onPreviewTransparent((*reinterpret_cast< QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 120: _t->onTransparentFinished(); break;
        case 121: _t->onTransparentAccepted(); break;
        case 122: _t->onTransparentRejected(); break;
        case 123: _t->on_actionGradient_triggered(); break;
        case 124: _t->on_actionCrop_triggered(); break;
        case 125: _t->onSelectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 126: _t->on_actionPaste_triggered(); break;
        case 127: _t->on_actionCopy_triggered(); break;
        case 128: _t->on_actionTransparent_colour_triggered(); break;
        case 129: _t->on_actionIndexed_Mode_triggered(); break;
        case 130: _t->on_actionRGB_Mode_triggered(); break;
        case 131: _t->on_actionDonate_triggered(); break;
        case 132: _t->on_actionAutomatic_Crop_triggered(); break;
        case 133: _t->on_actionNegative_triggered(); break;
        case 134: _t->on_actionBlack_and_white_triggered(); break;
        case 135: { bool _r = _t->fileExists((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 136: _t->on_actionOutside_drop_shadow_triggered(); break;
        case 137: _t->on_actionOpacity_triggered(); break;
        case 138: _t->on_actionPlugins_triggered(); break;
        case 139: _t->on_actionCheck_for_updates_triggered(); break;
        case 140: _t->onShowHotspotsTriggered(); break;
        case 141: _t->on_actionSelect_all_triggered(); break;
        case 142: _t->on_actionColour_Threshold_triggered(); break;
        case 143: _t->on_actionClearHistory_triggered(); break;
        case 144: _t->on_actionClearClipboard_triggered(); break;
        case 145: _t->on_actionDuplicate_triggered(); break;
        case 146: _t->on_actionShow_grid_triggered(); break;
        case 147: { QString _r = _t->prepareFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 148: { bool _r = _t->fileTypeSupported((*reinterpret_cast< QList<QByteArray>(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 149: _t->getNextZoomFromScale((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 150: _t->getPrevZoomFromScale((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 151: _t->onSafeQuitApp(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 152)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 152;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 152)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 152;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
