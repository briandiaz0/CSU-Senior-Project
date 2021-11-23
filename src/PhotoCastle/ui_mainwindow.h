/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "colorboxwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionRevert;
    QAction *actionRecent_files;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionClose;
    QAction *actionClose_all;
    QAction *actionPrint;
    QAction *actionImage_properties;
    QAction *actionQuit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionFade;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionClear;
    QAction *actionPaste_as_new_image;
    QAction *actionPaste_special;
    QAction *actionStroke_and_fill;
    QAction *actionOptimized_Clipping;
    QAction *actionValidate;
    QAction *actionOptions;
    QAction *actionTransform;
    QAction *actionDefine_pattern;
    QAction *actionFill_with_pattern;
    QAction *actionFlip_Vertical;
    QAction *actionFlip_Horizontal;
    QAction *actionSkew;
    QAction *actionImage_Size;
    QAction *actionCanvas_Size;
    QAction *actionFit_Image;
    QAction *actionDuplicate;
    QAction *actionCrop;
    QAction *actionAutomatic_Crop;
    QAction *actionOutside_frame;
    QAction *actionOutside_drop_shadow;
    QAction *actionTransparent_colour;
    QAction *actionAutomatic_transparency;
    QAction *actionTransparency_mask;
    QAction *actionText;
    QAction *actionCopyright;
    QAction *actionShow_selection;
    QAction *actionSelect_all;
    QAction *actionSet_shape;
    QAction *actionInvert;
    QAction *actionManual_settings;
    QAction *actionCenter;
    QAction *actionFit_ratio;
    QAction *actionContract;
    QAction *actionExpand;
    QAction *actionTransform_2;
    QAction *actionAntialiasing;
    QAction *actionBounding_box;
    QAction *actionPaste_and_text_bounding_box;
    QAction *actionCopy_shape;
    QAction *actionPaste_shape;
    QAction *actionLoad_shape;
    QAction *actionSave_shape;
    QAction *actionBright_Contrast;
    QAction *actionHue_Saturation;
    QAction *actionColour_balance;
    QAction *actionGamma_correct;
    QAction *actionAuto_levels;
    QAction *actionAuto_contrast;
    QAction *actionMore_shadows;
    QAction *actionMore_highlights;
    QAction *actionLevels;
    QAction *actionSwap_RGB_channel;
    QAction *actionReplace_colour;
    QAction *actionReplace_colour_range;
    QAction *actionDuotone;
    QAction *actionDithering;
    QAction *actionNegative;
    QAction *actionPosterize;
    QAction *actionHue_variation;
    QAction *actionSoften;
    QAction *actionSharpen;
    QAction *actionRelief;
    QAction *actionStylize;
    QAction *actionAged_effect;
    QAction *actionTexture;
    QAction *actionOther;
    QAction *actionFilterbar;
    QAction *actionToolpalette;
    QAction *actionShow_grid;
    QAction *actionSnap_to_grid;
    QAction *actionZoom_in;
    QAction *actionZoom_out;
    QAction *actionOriginal_size;
    QAction *actionAuto_zoom;
    QAction *actionFull_screen;
    QAction *actionAutomate_Batch;
    QAction *actionSet_wallpaper;
    QAction *actionExport_as_icon;
    QAction *actionPreferences;
    QAction *actionInformation;
    QAction *actionAbout;
    QAction *actionScan;
    QAction *actionRGB_Mode;
    QAction *actionIndexed_Mode;
    QAction *actionBrightminus;
    QAction *actionBrightplus;
    QAction *actionContrastminus;
    QAction *actionContrastplus;
    QAction *actionSaturationminus;
    QAction *actionSaturationplus;
    QAction *actionGammaCorrectminus;
    QAction *actionGammaCorrectplus;
    QAction *actionGrayScale;
    QAction *actionOldPhoto;
    QAction *actionDustReduction;
    QAction *actionBlur;
    QAction *actionReinforce;
    QAction *actionGradient;
    QAction *actionRotate_CCW;
    QAction *actionRotate_CW;
    QAction *actionOil_Paint;
    QAction *actionCharcoal_Drawing;
    QAction *actionSwirl;
    QAction *actionDonate;
    QAction *actionAcquire_image;
    QAction *actionSelect_device;
    QAction *actionSolarize;
    QAction *actionWave;
    QAction *actionImplode;
    QAction *actionEmboss;
    QAction *actionTrim;
    QAction *actionGaussian;
    QAction *actionImpulse;
    QAction *actionLaplacian;
    QAction *actionPoisson;
    QAction *actionMonoChromatic;
    QAction *actionEqualize;
    QAction *actionCrop_To_Center;
    QAction *actionAdd_Simple_Frame;
    QAction *actionMotion_blur;
    QAction *actionNormalize;
    QAction *action3D_frame;
    QAction *actionExplode;
    QAction *actionDespeckle;
    QAction *actionSepia;
    QAction *actionBlack_and_white;
    QAction *actionOpacity;
    QAction *actionPlugins;
    QAction *actionCheck_for_updates;
    QAction *actionColour_Threshold;
    QAction *actionNew_layer;
    QAction *actionRemove_layer;
    QAction *actionClearHistory;
    QAction *actionClearClipboard;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuRecent_Files;
    QMenu *menuEdit;
    QMenu *menuPurge;
    QMenu *menuImage;
    QMenu *menuTransform;
    //QMenu *menuSelection;
    QMenu *menuAdjust;
    QMenu *menuFilter;
    QMenu *menuDeform;
    QMenu *menuArtistic;
    QMenu *menuSoften;
    QMenu *menuSharpen;
    QMenu *menuFlatten;
    QMenu *menuEdges;
    QMenu *menuNoise;
    QMenu *menuFrame;
    QMenu *menuColour;
    QMenu *menuVisual_Effect;
    QMenu *menuView;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_palette;
    QWidget *dockWidgetContentsToolpalette;
    QVBoxLayout *verticalLayout;
    QGridLayout *toolsGridLayout;
    QToolButton *toolButtonEraser;
    QToolButton *toolButtonSprayCan;
    QToolButton *toolButtonPointer;
    QToolButton *toolButtonLine;
    QToolButton *toolButtonWand;
    QToolButton *toolButtonPaintBrush;
    QToolButton *toolButtonPaintBrushAdv;
    QToolButton *toolButtonBlur;
    QToolButton *toolButtonSmudge;
    QToolButton *toolButtonStamp;
    QToolButton *toolButtonPaintBucket;
    QToolButton *toolButtonDropper;
    ColorBoxWidget *colorBoxWidget;
    QToolBar *toolBar;
    QDockWidget *dockWidgetSettings;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1082, 1000);
        MainWindow->setMinimumSize(QSize(0, 645));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pixmaps/assets/pixmaps/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionNew->setVisible(true);
        actionNew->setIconVisibleInMenu(false);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionOpen->setIconVisibleInMenu(false);
        actionRevert = new QAction(MainWindow);
        actionRevert->setObjectName(QString::fromUtf8("actionRevert"));
        actionRecent_files = new QAction(MainWindow);
        actionRecent_files->setObjectName(QString::fromUtf8("actionRecent_files"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSave->setIconVisibleInMenu(false);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionClose_all = new QAction(MainWindow);
        actionClose_all->setObjectName(QString::fromUtf8("actionClose_all"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon4);
        actionPrint->setIconVisibleInMenu(false);
        actionImage_properties = new QAction(MainWindow);
        actionImage_properties->setObjectName(QString::fromUtf8("actionImage_properties"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon5);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon6);
        actionFade = new QAction(MainWindow);
        actionFade->setObjectName(QString::fromUtf8("actionFade"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        actionPaste_as_new_image = new QAction(MainWindow);
        actionPaste_as_new_image->setObjectName(QString::fromUtf8("actionPaste_as_new_image"));
        actionPaste_special = new QAction(MainWindow);
        actionPaste_special->setObjectName(QString::fromUtf8("actionPaste_special"));
        actionStroke_and_fill = new QAction(MainWindow);
        actionStroke_and_fill->setObjectName(QString::fromUtf8("actionStroke_and_fill"));
        actionOptimized_Clipping = new QAction(MainWindow);
        actionOptimized_Clipping->setObjectName(QString::fromUtf8("actionOptimized_Clipping"));
        actionValidate = new QAction(MainWindow);
        actionValidate->setObjectName(QString::fromUtf8("actionValidate"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        actionTransform = new QAction(MainWindow);
        actionTransform->setObjectName(QString::fromUtf8("actionTransform"));
        actionDefine_pattern = new QAction(MainWindow);
        actionDefine_pattern->setObjectName(QString::fromUtf8("actionDefine_pattern"));
        actionFill_with_pattern = new QAction(MainWindow);
        actionFill_with_pattern->setObjectName(QString::fromUtf8("actionFill_with_pattern"));
        actionFlip_Vertical = new QAction(MainWindow);
        actionFlip_Vertical->setObjectName(QString::fromUtf8("actionFlip_Vertical"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/flipV.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFlip_Vertical->setIcon(icon7);
        actionFlip_Horizontal = new QAction(MainWindow);
        actionFlip_Horizontal->setObjectName(QString::fromUtf8("actionFlip_Horizontal"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/flipH.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFlip_Horizontal->setIcon(icon8);
        actionSkew = new QAction(MainWindow);
        actionSkew->setObjectName(QString::fromUtf8("actionSkew"));
        actionImage_Size = new QAction(MainWindow);
        actionImage_Size->setObjectName(QString::fromUtf8("actionImage_Size"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/imgsize.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImage_Size->setIcon(icon9);
        actionCanvas_Size = new QAction(MainWindow);
        actionCanvas_Size->setObjectName(QString::fromUtf8("actionCanvas_Size"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/cansize.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCanvas_Size->setIcon(icon10);
        actionFit_Image = new QAction(MainWindow);
        actionFit_Image->setObjectName(QString::fromUtf8("actionFit_Image"));
        actionDuplicate = new QAction(MainWindow);
        actionDuplicate->setObjectName(QString::fromUtf8("actionDuplicate"));
        actionCrop = new QAction(MainWindow);
        actionCrop->setObjectName(QString::fromUtf8("actionCrop"));
        actionAutomatic_Crop = new QAction(MainWindow);
        actionAutomatic_Crop->setObjectName(QString::fromUtf8("actionAutomatic_Crop"));
        actionOutside_frame = new QAction(MainWindow);
        actionOutside_frame->setObjectName(QString::fromUtf8("actionOutside_frame"));
        actionOutside_drop_shadow = new QAction(MainWindow);
        actionOutside_drop_shadow->setObjectName(QString::fromUtf8("actionOutside_drop_shadow"));
        actionTransparent_colour = new QAction(MainWindow);
        actionTransparent_colour->setObjectName(QString::fromUtf8("actionTransparent_colour"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/trans.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTransparent_colour->setIcon(icon11);
        actionAutomatic_transparency = new QAction(MainWindow);
        actionAutomatic_transparency->setObjectName(QString::fromUtf8("actionAutomatic_transparency"));
        actionTransparency_mask = new QAction(MainWindow);
        actionTransparency_mask->setObjectName(QString::fromUtf8("actionTransparency_mask"));
        actionText = new QAction(MainWindow);
        actionText->setObjectName(QString::fromUtf8("actionText"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/text.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionText->setIcon(icon12);
        actionCopyright = new QAction(MainWindow);
        actionCopyright->setObjectName(QString::fromUtf8("actionCopyright"));
        actionShow_selection = new QAction(MainWindow);
        actionShow_selection->setObjectName(QString::fromUtf8("actionShow_selection"));
        actionShow_selection->setCheckable(true);
        actionShow_selection->setChecked(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/show.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_selection->setIcon(icon13);
        actionSelect_all = new QAction(MainWindow);
        actionSelect_all->setObjectName(QString::fromUtf8("actionSelect_all"));
        actionSet_shape = new QAction(MainWindow);
        actionSet_shape->setObjectName(QString::fromUtf8("actionSet_shape"));
        actionInvert = new QAction(MainWindow);
        actionInvert->setObjectName(QString::fromUtf8("actionInvert"));
        actionManual_settings = new QAction(MainWindow);
        actionManual_settings->setObjectName(QString::fromUtf8("actionManual_settings"));
        actionCenter = new QAction(MainWindow);
        actionCenter->setObjectName(QString::fromUtf8("actionCenter"));
        actionFit_ratio = new QAction(MainWindow);
        actionFit_ratio->setObjectName(QString::fromUtf8("actionFit_ratio"));
        actionContract = new QAction(MainWindow);
        actionContract->setObjectName(QString::fromUtf8("actionContract"));
        actionExpand = new QAction(MainWindow);
        actionExpand->setObjectName(QString::fromUtf8("actionExpand"));
        actionTransform_2 = new QAction(MainWindow);
        actionTransform_2->setObjectName(QString::fromUtf8("actionTransform_2"));
        actionAntialiasing = new QAction(MainWindow);
        actionAntialiasing->setObjectName(QString::fromUtf8("actionAntialiasing"));
        actionBounding_box = new QAction(MainWindow);
        actionBounding_box->setObjectName(QString::fromUtf8("actionBounding_box"));
        actionPaste_and_text_bounding_box = new QAction(MainWindow);
        actionPaste_and_text_bounding_box->setObjectName(QString::fromUtf8("actionPaste_and_text_bounding_box"));
        actionCopy_shape = new QAction(MainWindow);
        actionCopy_shape->setObjectName(QString::fromUtf8("actionCopy_shape"));
        actionPaste_shape = new QAction(MainWindow);
        actionPaste_shape->setObjectName(QString::fromUtf8("actionPaste_shape"));
        actionLoad_shape = new QAction(MainWindow);
        actionLoad_shape->setObjectName(QString::fromUtf8("actionLoad_shape"));
        actionSave_shape = new QAction(MainWindow);
        actionSave_shape->setObjectName(QString::fromUtf8("actionSave_shape"));
        actionBright_Contrast = new QAction(MainWindow);
        actionBright_Contrast->setObjectName(QString::fromUtf8("actionBright_Contrast"));
        actionHue_Saturation = new QAction(MainWindow);
        actionHue_Saturation->setObjectName(QString::fromUtf8("actionHue_Saturation"));
        actionColour_balance = new QAction(MainWindow);
        actionColour_balance->setObjectName(QString::fromUtf8("actionColour_balance"));
        actionGamma_correct = new QAction(MainWindow);
        actionGamma_correct->setObjectName(QString::fromUtf8("actionGamma_correct"));
        actionAuto_levels = new QAction(MainWindow);
        actionAuto_levels->setObjectName(QString::fromUtf8("actionAuto_levels"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/autolevel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAuto_levels->setIcon(icon14);
        actionAuto_contrast = new QAction(MainWindow);
        actionAuto_contrast->setObjectName(QString::fromUtf8("actionAuto_contrast"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/autobright.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAuto_contrast->setIcon(icon15);
        actionMore_shadows = new QAction(MainWindow);
        actionMore_shadows->setObjectName(QString::fromUtf8("actionMore_shadows"));
        actionMore_highlights = new QAction(MainWindow);
        actionMore_highlights->setObjectName(QString::fromUtf8("actionMore_highlights"));
        actionLevels = new QAction(MainWindow);
        actionLevels->setObjectName(QString::fromUtf8("actionLevels"));
        actionSwap_RGB_channel = new QAction(MainWindow);
        actionSwap_RGB_channel->setObjectName(QString::fromUtf8("actionSwap_RGB_channel"));
        actionReplace_colour = new QAction(MainWindow);
        actionReplace_colour->setObjectName(QString::fromUtf8("actionReplace_colour"));
        actionReplace_colour_range = new QAction(MainWindow);
        actionReplace_colour_range->setObjectName(QString::fromUtf8("actionReplace_colour_range"));
        actionDuotone = new QAction(MainWindow);
        actionDuotone->setObjectName(QString::fromUtf8("actionDuotone"));
        actionDithering = new QAction(MainWindow);
        actionDithering->setObjectName(QString::fromUtf8("actionDithering"));
        actionNegative = new QAction(MainWindow);
        actionNegative->setObjectName(QString::fromUtf8("actionNegative"));
        actionPosterize = new QAction(MainWindow);
        actionPosterize->setObjectName(QString::fromUtf8("actionPosterize"));
        actionHue_variation = new QAction(MainWindow);
        actionHue_variation->setObjectName(QString::fromUtf8("actionHue_variation"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/hue.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHue_variation->setIcon(icon16);
        actionSoften = new QAction(MainWindow);
        actionSoften->setObjectName(QString::fromUtf8("actionSoften"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/soften.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSoften->setIcon(icon17);
        actionSharpen = new QAction(MainWindow);
        actionSharpen->setObjectName(QString::fromUtf8("actionSharpen"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/sharpen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSharpen->setIcon(icon18);
        actionRelief = new QAction(MainWindow);
        actionRelief->setObjectName(QString::fromUtf8("actionRelief"));
        actionStylize = new QAction(MainWindow);
        actionStylize->setObjectName(QString::fromUtf8("actionStylize"));
        actionAged_effect = new QAction(MainWindow);
        actionAged_effect->setObjectName(QString::fromUtf8("actionAged_effect"));
        actionTexture = new QAction(MainWindow);
        actionTexture->setObjectName(QString::fromUtf8("actionTexture"));
        actionOther = new QAction(MainWindow);
        actionOther->setObjectName(QString::fromUtf8("actionOther"));
        actionFilterbar = new QAction(MainWindow);
        actionFilterbar->setObjectName(QString::fromUtf8("actionFilterbar"));
        actionFilterbar->setCheckable(true);
        actionToolpalette = new QAction(MainWindow);
        actionToolpalette->setObjectName(QString::fromUtf8("actionToolpalette"));
        actionToolpalette->setCheckable(true);
        actionShow_grid = new QAction(MainWindow);
        actionShow_grid->setObjectName(QString::fromUtf8("actionShow_grid"));
        actionShow_grid->setCheckable(true);
        actionSnap_to_grid = new QAction(MainWindow);
        actionSnap_to_grid->setObjectName(QString::fromUtf8("actionSnap_to_grid"));
        actionZoom_in = new QAction(MainWindow);
        actionZoom_in->setObjectName(QString::fromUtf8("actionZoom_in"));
        actionZoom_out = new QAction(MainWindow);
        actionZoom_out->setObjectName(QString::fromUtf8("actionZoom_out"));
        actionOriginal_size = new QAction(MainWindow);
        actionOriginal_size->setObjectName(QString::fromUtf8("actionOriginal_size"));
        actionAuto_zoom = new QAction(MainWindow);
        actionAuto_zoom->setObjectName(QString::fromUtf8("actionAuto_zoom"));
        actionFull_screen = new QAction(MainWindow);
        actionFull_screen->setObjectName(QString::fromUtf8("actionFull_screen"));
        actionFull_screen->setCheckable(true);
        actionAutomate_Batch = new QAction(MainWindow);
        actionAutomate_Batch->setObjectName(QString::fromUtf8("actionAutomate_Batch"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/batch.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAutomate_Batch->setIcon(icon19);
        actionSet_wallpaper = new QAction(MainWindow);
        actionSet_wallpaper->setObjectName(QString::fromUtf8("actionSet_wallpaper"));
        actionExport_as_icon = new QAction(MainWindow);
        actionExport_as_icon->setObjectName(QString::fromUtf8("actionExport_as_icon"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/pref.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreferences->setIcon(icon20);
        actionInformation = new QAction(MainWindow);
        actionInformation->setObjectName(QString::fromUtf8("actionInformation"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionScan = new QAction(MainWindow);
        actionScan->setObjectName(QString::fromUtf8("actionScan"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/scan.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionScan->setIcon(icon21);
        actionScan->setVisible(false);
        actionRGB_Mode = new QAction(MainWindow);
        actionRGB_Mode->setObjectName(QString::fromUtf8("actionRGB_Mode"));
        actionRGB_Mode->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/rgb.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRGB_Mode->setIcon(icon22);
        actionIndexed_Mode = new QAction(MainWindow);
        actionIndexed_Mode->setObjectName(QString::fromUtf8("actionIndexed_Mode"));
        actionIndexed_Mode->setCheckable(true);
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar1/index.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIndexed_Mode->setIcon(icon23);
        actionBrightminus = new QAction(MainWindow);
        actionBrightminus->setObjectName(QString::fromUtf8("actionBrightminus"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/brightness-.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBrightminus->setIcon(icon24);
        actionBrightplus = new QAction(MainWindow);
        actionBrightplus->setObjectName(QString::fromUtf8("actionBrightplus"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/brightness+.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBrightplus->setIcon(icon25);
        actionContrastminus = new QAction(MainWindow);
        actionContrastminus->setObjectName(QString::fromUtf8("actionContrastminus"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/contrast-.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionContrastminus->setIcon(icon26);
        actionContrastplus = new QAction(MainWindow);
        actionContrastplus->setObjectName(QString::fromUtf8("actionContrastplus"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/contrast+.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionContrastplus->setIcon(icon27);
        actionSaturationminus = new QAction(MainWindow);
        actionSaturationminus->setObjectName(QString::fromUtf8("actionSaturationminus"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/saturation-.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaturationminus->setIcon(icon28);
        actionSaturationplus = new QAction(MainWindow);
        actionSaturationplus->setObjectName(QString::fromUtf8("actionSaturationplus"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/saturation+.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaturationplus->setIcon(icon29);
        actionGammaCorrectminus = new QAction(MainWindow);
        actionGammaCorrectminus->setObjectName(QString::fromUtf8("actionGammaCorrectminus"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/gammacorrect-.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGammaCorrectminus->setIcon(icon30);
        actionGammaCorrectplus = new QAction(MainWindow);
        actionGammaCorrectplus->setObjectName(QString::fromUtf8("actionGammaCorrectplus"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/gammacorrect+.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGammaCorrectplus->setIcon(icon31);
        actionGrayScale = new QAction(MainWindow);
        actionGrayScale->setObjectName(QString::fromUtf8("actionGrayScale"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/grayscale.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGrayScale->setIcon(icon32);
        actionOldPhoto = new QAction(MainWindow);
        actionOldPhoto->setObjectName(QString::fromUtf8("actionOldPhoto"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/old_photo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOldPhoto->setIcon(icon33);
        actionDustReduction = new QAction(MainWindow);
        actionDustReduction->setObjectName(QString::fromUtf8("actionDustReduction"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/dustreduction.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDustReduction->setIcon(icon34);
        actionBlur = new QAction(MainWindow);
        actionBlur->setObjectName(QString::fromUtf8("actionBlur"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/blur.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBlur->setIcon(icon35);
        actionReinforce = new QAction(MainWindow);
        actionReinforce->setObjectName(QString::fromUtf8("actionReinforce"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/reinforce.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReinforce->setIcon(icon36);
        actionGradient = new QAction(MainWindow);
        actionGradient->setObjectName(QString::fromUtf8("actionGradient"));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/gradient.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGradient->setIcon(icon37);
        actionRotate_CCW = new QAction(MainWindow);
        actionRotate_CCW->setObjectName(QString::fromUtf8("actionRotate_CCW"));
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/rotateCCW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotate_CCW->setIcon(icon38);
        actionRotate_CW = new QAction(MainWindow);
        actionRotate_CW->setObjectName(QString::fromUtf8("actionRotate_CW"));
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/rotateCW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotate_CW->setIcon(icon39);
        actionOil_Paint = new QAction(MainWindow);
        actionOil_Paint->setObjectName(QString::fromUtf8("actionOil_Paint"));
        actionCharcoal_Drawing = new QAction(MainWindow);
        actionCharcoal_Drawing->setObjectName(QString::fromUtf8("actionCharcoal_Drawing"));
        actionSwirl = new QAction(MainWindow);
        actionSwirl->setObjectName(QString::fromUtf8("actionSwirl"));
        actionDonate = new QAction(MainWindow);
        actionDonate->setObjectName(QString::fromUtf8("actionDonate"));
        actionAcquire_image = new QAction(MainWindow);
        actionAcquire_image->setObjectName(QString::fromUtf8("actionAcquire_image"));
        actionSelect_device = new QAction(MainWindow);
        actionSelect_device->setObjectName(QString::fromUtf8("actionSelect_device"));
        actionSolarize = new QAction(MainWindow);
        actionSolarize->setObjectName(QString::fromUtf8("actionSolarize"));
        actionWave = new QAction(MainWindow);
        actionWave->setObjectName(QString::fromUtf8("actionWave"));
        actionImplode = new QAction(MainWindow);
        actionImplode->setObjectName(QString::fromUtf8("actionImplode"));
        actionEmboss = new QAction(MainWindow);
        actionEmboss->setObjectName(QString::fromUtf8("actionEmboss"));
        actionTrim = new QAction(MainWindow);
        actionTrim->setObjectName(QString::fromUtf8("actionTrim"));
        actionGaussian = new QAction(MainWindow);
        actionGaussian->setObjectName(QString::fromUtf8("actionGaussian"));
        actionImpulse = new QAction(MainWindow);
        actionImpulse->setObjectName(QString::fromUtf8("actionImpulse"));
        actionLaplacian = new QAction(MainWindow);
        actionLaplacian->setObjectName(QString::fromUtf8("actionLaplacian"));
        actionPoisson = new QAction(MainWindow);
        actionPoisson->setObjectName(QString::fromUtf8("actionPoisson"));
        actionMonoChromatic = new QAction(MainWindow);
        actionMonoChromatic->setObjectName(QString::fromUtf8("actionMonoChromatic"));
        actionEqualize = new QAction(MainWindow);
        actionEqualize->setObjectName(QString::fromUtf8("actionEqualize"));
        actionCrop_To_Center = new QAction(MainWindow);
        actionCrop_To_Center->setObjectName(QString::fromUtf8("actionCrop_To_Center"));
        actionAdd_Simple_Frame = new QAction(MainWindow);
        actionAdd_Simple_Frame->setObjectName(QString::fromUtf8("actionAdd_Simple_Frame"));
        actionMotion_blur = new QAction(MainWindow);
        actionMotion_blur->setObjectName(QString::fromUtf8("actionMotion_blur"));
        actionNormalize = new QAction(MainWindow);
        actionNormalize->setObjectName(QString::fromUtf8("actionNormalize"));
        action3D_frame = new QAction(MainWindow);
        action3D_frame->setObjectName(QString::fromUtf8("action3D_frame"));
        actionExplode = new QAction(MainWindow);
        actionExplode->setObjectName(QString::fromUtf8("actionExplode"));
        actionDespeckle = new QAction(MainWindow);
        actionDespeckle->setObjectName(QString::fromUtf8("actionDespeckle"));
        actionSepia = new QAction(MainWindow);
        actionSepia->setObjectName(QString::fromUtf8("actionSepia"));
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/sepia.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSepia->setIcon(icon40);
        actionBlack_and_white = new QAction(MainWindow);
        actionBlack_and_white->setObjectName(QString::fromUtf8("actionBlack_and_white"));
        actionOpacity = new QAction(MainWindow);
        actionOpacity->setObjectName(QString::fromUtf8("actionOpacity"));
        actionPlugins = new QAction(MainWindow);
        actionPlugins->setObjectName(QString::fromUtf8("actionPlugins"));
        actionCheck_for_updates = new QAction(MainWindow);
        actionCheck_for_updates->setObjectName(QString::fromUtf8("actionCheck_for_updates"));
        actionColour_Threshold = new QAction(MainWindow);
        actionColour_Threshold->setObjectName(QString::fromUtf8("actionColour_Threshold"));
        actionNew_layer = new QAction(MainWindow);
        actionNew_layer->setObjectName(QString::fromUtf8("actionNew_layer"));
        actionRemove_layer = new QAction(MainWindow);
        actionRemove_layer->setObjectName(QString::fromUtf8("actionRemove_layer"));
        actionClearHistory = new QAction(MainWindow);
        actionClearHistory->setObjectName(QString::fromUtf8("actionClearHistory"));
        actionClearClipboard = new QAction(MainWindow);
        actionClearClipboard->setObjectName(QString::fromUtf8("actionClearClipboard"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {\n"
"    border: 1px solid #c6c6c6;\n"
"    background: #eee;\n"
"    width: 10px;\n"
"}\n"
"QScrollBar:horizontal {\n"
"    border: 1px solid #c6c6c6;\n"
"    background: #eee;\n"
"    height: 10px;\n"
"}\n"
"QScrollBar::handle {\n"
"    background: #63c5ff;\n"
"	width: 15px;\n"
"}"));
        mdiArea->setViewMode(QMdiArea::TabbedView);
        mdiArea->setDocumentMode(true);
        mdiArea->setTabsClosable(true);
        mdiArea->setTabsMovable(true);

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1082, 22));
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(true);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuRecent_Files = new QMenu(menuFile);
        menuRecent_Files->setObjectName(QString::fromUtf8("menuRecent_Files"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuPurge = new QMenu(menuEdit);
        menuPurge->setObjectName(QString::fromUtf8("menuPurge"));
        menuImage = new QMenu(menuBar);
        menuImage->setObjectName(QString::fromUtf8("menuImage"));
        menuTransform = new QMenu(menuImage);
        menuTransform->setObjectName(QString::fromUtf8("menuTransform"));
        //menuSelection = new QMenu(menuBar);
        //menuSelection->setObjectName(QString::fromUtf8("menuSelection"));
        menuAdjust = new QMenu(menuBar);
        menuAdjust->setObjectName(QString::fromUtf8("menuAdjust"));
        menuFilter = new QMenu(menuBar);
        menuFilter->setObjectName(QString::fromUtf8("menuFilter"));
        menuDeform = new QMenu(menuFilter);
        menuDeform->setObjectName(QString::fromUtf8("menuDeform"));
        menuArtistic = new QMenu(menuFilter);
        menuArtistic->setObjectName(QString::fromUtf8("menuArtistic"));
        menuSoften = new QMenu(menuFilter);
        menuSoften->setObjectName(QString::fromUtf8("menuSoften"));
        menuSharpen = new QMenu(menuFilter);
        menuSharpen->setObjectName(QString::fromUtf8("menuSharpen"));
        menuFlatten = new QMenu(menuFilter);
        menuFlatten->setObjectName(QString::fromUtf8("menuFlatten"));
        menuEdges = new QMenu(menuFilter);
        menuEdges->setObjectName(QString::fromUtf8("menuEdges"));
        menuNoise = new QMenu(menuFilter);
        menuNoise->setObjectName(QString::fromUtf8("menuNoise"));
        menuFrame = new QMenu(menuFilter);
        menuFrame->setObjectName(QString::fromUtf8("menuFrame"));
        menuColour = new QMenu(menuFilter);
        menuColour->setObjectName(QString::fromUtf8("menuColour"));
        menuVisual_Effect = new QMenu(menuFilter);
        menuVisual_Effect->setObjectName(QString::fromUtf8("menuVisual_Effect"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setEnabled(true);
        mainToolBar->setMinimumSize(QSize(0, 0));
        mainToolBar->setIconSize(QSize(24, 24));
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget_palette = new QDockWidget(MainWindow);
        dockWidget_palette->setObjectName(QString::fromUtf8("dockWidget_palette"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockWidget_palette->sizePolicy().hasHeightForWidth());
        dockWidget_palette->setSizePolicy(sizePolicy);
        dockWidget_palette->setMinimumSize(QSize(150, 400));
        dockWidget_palette->setMaximumSize(QSize(150, 400));
        dockWidget_palette->setLayoutDirection(Qt::LeftToRight);
        dockWidget_palette->setStyleSheet(QString::fromUtf8(""));
        dockWidget_palette->setFloating(false);
        dockWidget_palette->setFeatures(QDockWidget::DockWidgetMovable);
        dockWidget_palette->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContentsToolpalette = new QWidget();
        dockWidgetContentsToolpalette->setObjectName(QString::fromUtf8("dockWidgetContentsToolpalette"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidgetContentsToolpalette->sizePolicy().hasHeightForWidth());
        dockWidgetContentsToolpalette->setSizePolicy(sizePolicy1);
        dockWidgetContentsToolpalette->setMinimumSize(QSize(0, 0));
        dockWidgetContentsToolpalette->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"border: none;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	background: #ddd;\n"
"	border-radius:4px;\n"
"	border: 1px solid #eee;\n"
"}\n"
"\n"
"QToolButton:checked {\n"
"	background: #ddd;\n"
"	border-radius:4px;\n"
"	border: 1px solid #c0c2c2;\n"
"}\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(dockWidgetContentsToolpalette);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolsGridLayout = new QGridLayout();
        toolsGridLayout->setSpacing(5);
        toolsGridLayout->setObjectName(QString::fromUtf8("toolsGridLayout"));
        toolsGridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        toolsGridLayout->setContentsMargins(10, 0, 10, 0);
        toolButtonEraser = new QToolButton(dockWidgetContentsToolpalette);
        toolButtonEraser->setObjectName(QString::fromUtf8("toolButtonEraser"));
        toolButtonEraser->setMinimumSize(QSize(40, 40));
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/toolpalette/assets/toolpalette_icons/Eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonEraser->setIcon(icon41);
        toolButtonEraser->setIconSize(QSize(25, 25));
        toolButtonEraser->setCheckable(true);

        toolsGridLayout->addWidget(toolButtonEraser, 5, 1, 1, 1);

        toolButtonSprayCan = new QToolButton(dockWidgetContentsToolpalette);
        toolButtonSprayCan->setObjectName(QString::fromUtf8("toolButtonSprayCan"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButtonSprayCan->sizePolicy().hasHeightForWidth());
        toolButtonSprayCan->setSizePolicy(sizePolicy2);
        toolButtonSprayCan->setMinimumSize(QSize(40, 40));
        toolButtonSprayCan->setFocusPolicy(Qt::NoFocus);
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/toolpalette/assets/toolpalette_icons/Spraycan.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonSprayCan->setIcon(icon42);
        toolButtonSprayCan->setIconSize(QSize(25, 25));
        toolButtonSprayCan->setCheckable(true);

        toolsGridLayout->addWidget(toolButtonSprayCan, 2, 2, 1, 1);

        toolButtonPointer = new QToolButton(dockWidgetContentsToolpalette);
        toolButtonPointer->setObjectName(QString::fromUtf8("toolButtonPointer"));
        sizePolicy2.setHeightForWidth(toolButtonPointer->sizePolicy().hasHeightForWidth());
        toolButtonPointer->setSizePolicy(sizePolicy2);
        toolButtonPointer->setMinimumSize(QSize(40, 40));
        toolButtonPointer->setFocusPolicy(Qt::NoFocus);
        toolButtonPointer->setLayoutDirection(Qt::LeftToRight);
        toolButtonPointer->setStyleSheet(QString::fromUtf8(""));
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/toolpalette/assets/toolpalette_icons/Pointer.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonPointer->setIcon(icon43);
        toolButtonPointer->setIconSize(QSize(25, 25));
        toolButtonPointer->setCheckable(true);

        toolsGridLayout->addWidget(toolButtonPointer, 1, 0, 1, 1);

        toolButtonLine = new QToolButton(dockWidgetContentsToolpalette);
        toolButtonLine->setObjectName(QString::fromUtf8("toolButtonLine"));
        sizePolicy2.setHeightForWidth(toolButtonLine->sizePolicy().hasHeightForWidth());
        toolButtonLine->setSizePolicy(sizePolicy2);
        toolButtonLine->setMinimumSize(QSize(40, 40));
        toolButtonLine->setFocusPolicy(Qt::NoFocus);
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/toolpalette/assets/toolpalette_icons/Line.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonLine->setIcon(icon44);
        toolButtonLine->setIconSize(QSize(25, 25));
        toolButtonLine->setCheckable(true);

        toolsGridLayout->addWidget(toolButtonLine, 2, 0, 1, 1);

        toolButtonWand = new QToolButton(dockWidgetContentsToolpalette);
        toolButtonWand->setObjectName(QString::fromUtf8("toolButtonWand"));
        sizePolicy2.setHeightForWidth(toolButtonWand->sizePolicy().hasHeightForWidth());
        toolButtonWand->setSizePolicy(sizePolicy2);
        toolButtonWand->setMinimumSize(QSize(40, 40));
        toolButtonWand->setFocusPolicy(Qt::NoFocus);
        QIcon icon45;
        icon45.addFile(QString::fromUtf8(":/toolpalette/assets/toolpalette_icons/Wand.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonWand->setIcon(icon45);
        toolButtonWand->setIconSize(QSize(25, 25));
        toolButtonWand->setCheckable(true);

        toolsGridLayout->addWidget(toolButtonWand, 1, 2, 1, 1);

        toolButtonPaintBrush = new QToolButton(dockWidgetContentsToolpalette);
        toolButtonPaintBrush->setObjectName(QString::fromUtf8("toolButtonPaintBrush"));
        sizePolicy2.setHeightForWidth(toolButtonPaintBrush->sizePolicy().hasHeightForWidth());
        toolButtonPaintBrush->setSizePolicy(sizePolicy2);
        toolButtonPaintBrush->setMinimumSize(QSize(40, 40));
        toolButtonPaintBrush->setFocusPolicy(Qt::NoFocus);
        QIcon icon46;
        icon46.addFile(QString::fromUtf8(":/toolpalette/assets/toolpalette_icons/PaintBrush.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonPaintBrush->setIcon(icon46);
        toolButtonPaintBrush->setIconSize(QSize(25, 25));
        toolButtonPaintBrush->setCheckable(true);

        toolsGridLayout->addWidget(toolButtonPaintBrush, 4, 0, 1, 1);

        toolButtonPaintBrushAdv = new QToolButton(dockWidgetContentsToolpalette);
        toolButtonPaintBrushAdv->setObjectName(QString::fromUtf8("toolButtonPaintBrushAdv"));
        sizePolicy2.setHeightForWidth(toolButtonPaintBrushAdv->sizePolicy().hasHeightForWidth());
        toolButtonPaintBrushAdv->setSizePolicy(sizePolicy2);
        toolButtonPaintBrushAdv->setMinimumSize(QSize(40, 40));
        toolButtonPaintBrushAdv->setFocusPolicy(Qt::NoFocus);
        QIcon icon47;
        icon47.addFile(QString::fromUtf8(":/toolpalette/assets/toolpalette_icons/PaintBrush-Plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonPaintBrushAdv->setIcon(icon47);
        toolButtonPaintBrushAdv->setIconSize(QSize(25, 25));
        toolButtonPaintBrushAdv->setCheckable(true);

        toolsGridLayout->addWidget(toolButtonPaintBrushAdv, 4, 1, 1, 1);

        toolButtonBlur = new QToolButton(dockWidgetContentsToolpalette);
        toolButtonBlur->setObjectName(QString::fromUtf8("toolButtonBlur"));
        sizePolicy2.setHeightForWidth(toolButtonBlur->sizePolicy().hasHeightForWidth());
        toolButtonBlur->setSizePolicy(sizePolicy2);
        toolButtonBlur->setMinimumSize(QSize(40, 40));
        toolButtonBlur->setFocusPolicy(Qt::NoFocus);
        QIcon icon48;
        icon48.addFile(QString::fromUtf8(":/toolpalette/assets/toolpalette_icons/Blur.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonBlur->setIcon(icon48);
        toolButtonBlur->setIconSize(QSize(25, 25));
        toolButtonBlur->setCheckable(true);

        toolsGridLayout->addWidget(toolButtonBlur, 5, 0, 1, 1);

        toolButtonSmudge = new QToolButton(dockWidgetContentsToolpalette);
        toolButtonSmudge->setObjectName(QString::fromUtf8("toolButtonSmudge"));
        toolButtonSmudge->setMinimumSize(QSize(40, 40));
        QIcon icon49;
        icon49.addFile(QString::fromUtf8(":/toolpalette/assets/toolpalette_icons/Smudge.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonSmudge->setIcon(icon49);
        toolButtonSmudge->setIconSize(QSize(25, 25));
        toolButtonSmudge->setCheckable(true);

        toolsGridLayout->addWidget(toolButtonSmudge, 5, 2, 1, 1);

        toolButtonStamp = new QToolButton(dockWidgetContentsToolpalette);
        toolButtonStamp->setObjectName(QString::fromUtf8("toolButtonStamp"));
        sizePolicy2.setHeightForWidth(toolButtonStamp->sizePolicy().hasHeightForWidth());
        toolButtonStamp->setSizePolicy(sizePolicy2);
        toolButtonStamp->setMinimumSize(QSize(40, 40));
        toolButtonStamp->setFocusPolicy(Qt::NoFocus);
        QIcon icon50;
        icon50.addFile(QString::fromUtf8(":/toolpalette/assets/toolpalette_icons/Stamp.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonStamp->setIcon(icon50);
        toolButtonStamp->setIconSize(QSize(25, 25));
        toolButtonStamp->setCheckable(true);

        toolsGridLayout->addWidget(toolButtonStamp, 4, 2, 1, 1);

        toolButtonPaintBucket = new QToolButton(dockWidgetContentsToolpalette);
        toolButtonPaintBucket->setObjectName(QString::fromUtf8("toolButtonPaintBucket"));
        sizePolicy2.setHeightForWidth(toolButtonPaintBucket->sizePolicy().hasHeightForWidth());
        toolButtonPaintBucket->setSizePolicy(sizePolicy2);
        toolButtonPaintBucket->setMinimumSize(QSize(40, 40));
        toolButtonPaintBucket->setFocusPolicy(Qt::NoFocus);
        QIcon icon51;
        icon51.addFile(QString::fromUtf8(":/toolpalette/assets/toolpalette_icons/Bucket.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonPaintBucket->setIcon(icon51);
        toolButtonPaintBucket->setIconSize(QSize(25, 25));
        toolButtonPaintBucket->setCheckable(true);

        toolsGridLayout->addWidget(toolButtonPaintBucket, 2, 1, 1, 1);

        toolButtonDropper = new QToolButton(dockWidgetContentsToolpalette);
        toolButtonDropper->setObjectName(QString::fromUtf8("toolButtonDropper"));
        sizePolicy2.setHeightForWidth(toolButtonDropper->sizePolicy().hasHeightForWidth());
        toolButtonDropper->setSizePolicy(sizePolicy2);
        toolButtonDropper->setMinimumSize(QSize(40, 40));
        toolButtonDropper->setFocusPolicy(Qt::NoFocus);
        QIcon icon52;
        icon52.addFile(QString::fromUtf8(":/toolpalette/assets/toolpalette_icons/ColourPicker.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonDropper->setIcon(icon52);
        toolButtonDropper->setIconSize(QSize(25, 25));
        toolButtonDropper->setCheckable(true);

        toolsGridLayout->addWidget(toolButtonDropper, 1, 1, 1, 1);

        colorBoxWidget = new ColorBoxWidget(dockWidgetContentsToolpalette);
        colorBoxWidget->setObjectName(QString::fromUtf8("colorBoxWidget"));
        colorBoxWidget->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(colorBoxWidget->sizePolicy().hasHeightForWidth());
        colorBoxWidget->setSizePolicy(sizePolicy3);
        colorBoxWidget->setMinimumSize(QSize(150, 200));
        colorBoxWidget->setMaximumSize(QSize(200, 200));
        colorBoxWidget->setCursor(QCursor(Qt::ArrowCursor));

        toolsGridLayout->addWidget(colorBoxWidget, 0, 0, 1, 3);


        verticalLayout->addLayout(toolsGridLayout);

        dockWidget_palette->setWidget(dockWidgetContentsToolpalette);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockWidget_palette);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(24, 24));
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);
        dockWidgetSettings = new QDockWidget(MainWindow);
        dockWidgetSettings->setObjectName(QString::fromUtf8("dockWidgetSettings"));
        dockWidgetSettings->setMinimumSize(QSize(150, 35));
        dockWidgetSettings->setMaximumSize(QSize(150, 400));
        dockWidgetSettings->setFeatures(QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidgetSettings->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockWidgetSettings);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuImage->menuAction());
        //menuBar->addAction(menuSelection->menuAction());
        //menuBar->addAction(menuAdjust->menuAction());
        //menuBar->addAction(menuFilter->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionRevert);
        menuFile->addAction(menuRecent_Files->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionClose);
        menuFile->addAction(actionClose_all);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionClear);
        menuEdit->addSeparator();
        menuEdit->addAction(actionValidate);
        menuEdit->addAction(actionOptions);
        menuEdit->addAction(actionTransform);
        menuEdit->addSeparator();
        menuEdit->addAction(actionDefine_pattern);
        menuEdit->addAction(actionFill_with_pattern);
        menuImage->addSeparator();
        menuImage->addAction(menuTransform->menuAction());
        menuImage->addSeparator();
        menuImage->addAction(actionImage_Size);
        menuImage->addAction(actionCanvas_Size);
        menuImage->addAction(actionFit_Image);
        menuImage->addAction(actionDuplicate);
        menuImage->addSeparator();
        menuImage->addAction(actionCrop);
        menuImage->addAction(actionAutomatic_Crop);
        menuImage->addSeparator();
        menuImage->addAction(actionText);
        menuTransform->addAction(actionFlip_Vertical);
        menuTransform->addAction(actionFlip_Horizontal);
        menuTransform->addSeparator();
        menuTransform->addAction(actionRotate_CCW);
        menuTransform->addAction(actionRotate_CW);
        menuTransform->addSeparator();
        menuTransform->addAction(actionSkew);
        menuDeform->addAction(actionSwirl);
        menuDeform->addAction(actionWave);
        menuDeform->addAction(actionImplode);
        menuDeform->addAction(actionExplode);
        menuArtistic->addAction(actionOil_Paint);
        menuArtistic->addAction(actionCharcoal_Drawing);
        menuArtistic->addAction(actionSolarize);
        menuSoften->addAction(actionSoften);
        menuSoften->addAction(actionBlur);
        menuSharpen->addAction(actionSharpen);
        menuSharpen->addAction(actionReinforce);
        menuFlatten->addAction(actionEmboss);
        menuEdges->addAction(actionMonoChromatic);
        menuNoise->addAction(actionDustReduction);
        menuNoise->addAction(actionDespeckle);
        menuNoise->addAction(actionGaussian);
        menuNoise->addAction(actionImpulse);
        menuNoise->addAction(actionLaplacian);
        menuNoise->addAction(actionPoisson);
        menuFrame->addAction(actionCrop_To_Center);
        menuFrame->addAction(actionAdd_Simple_Frame);
        menuFrame->addAction(action3D_frame);
        menuColour->addAction(actionGrayScale);
        menuColour->addAction(actionOldPhoto);
        menuColour->addAction(actionSepia);
        menuColour->addAction(actionEqualize);
        menuColour->addAction(actionNormalize);
        menuColour->addAction(actionBlack_and_white);
        menuColour->addAction(actionColour_Threshold);
        menuVisual_Effect->addAction(actionMotion_blur);
        menuView->addAction(actionFilterbar);
        menuView->addAction(actionToolpalette);
        menuView->addSeparator();
        menuView->addAction(actionShow_grid);
        menuView->addAction(actionSnap_to_grid);
        menuView->addSeparator();
        menuView->addAction(actionZoom_in);
        menuView->addAction(actionZoom_out);
        menuView->addAction(actionOriginal_size);
        menuView->addAction(actionFull_screen);
        menuTools->addAction(actionAutomate_Batch);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPrint);
        mainToolBar->addAction(actionScan);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCanvas_Size);
        mainToolBar->addAction(actionImage_Size);
        mainToolBar->addAction(actionText);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAutomate_Batch);
        mainToolBar->addSeparator();
        toolBar->addAction(actionBrightminus);
        toolBar->addAction(actionBrightplus);
        toolBar->addSeparator();
        toolBar->addAction(actionContrastminus);
        toolBar->addAction(actionContrastplus);
        toolBar->addSeparator();
        toolBar->addAction(actionGammaCorrectminus);
        toolBar->addAction(actionGammaCorrectplus);
        toolBar->addSeparator();
        toolBar->addAction(actionSaturationminus);
        toolBar->addAction(actionSaturationplus);
        toolBar->addSeparator();
        toolBar->addAction(actionGrayScale);
        toolBar->addSeparator();
        toolBar->addAction(actionSoften);
        toolBar->addSeparator();
        toolBar->addAction(actionBlur);
        toolBar->addSeparator();
        toolBar->addAction(actionSharpen);
        toolBar->addSeparator();
        toolBar->addAction(actionReinforce);
        toolBar->addSeparator();
        toolBar->addAction(actionFlip_Horizontal);
        toolBar->addAction(actionFlip_Vertical);
        toolBar->addSeparator();
        toolBar->addAction(actionRotate_CCW);
        toolBar->addAction(actionRotate_CW);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "PhotoCastle", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "&New...", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "&Open...", nullptr));
        actionRevert->setText(QCoreApplication::translate("MainWindow", "Revert", nullptr));
        actionRecent_files->setText(QCoreApplication::translate("MainWindow", "Recent Files", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "&Save", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "&Save As...", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindow", "&Close", nullptr));
        actionClose_all->setText(QCoreApplication::translate("MainWindow", "Close &All", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print...", nullptr));
        actionImage_properties->setText(QCoreApplication::translate("MainWindow", "Image Properties", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionFade->setText(QCoreApplication::translate("MainWindow", "Fade", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        actionPaste_as_new_image->setText(QCoreApplication::translate("MainWindow", "Paste As New Image", nullptr));
        actionPaste_special->setText(QCoreApplication::translate("MainWindow", "Paste Special", nullptr));
        actionStroke_and_fill->setText(QCoreApplication::translate("MainWindow", "Stroke and Fill...", nullptr));
        actionOptimized_Clipping->setText(QCoreApplication::translate("MainWindow", "Optimized Clipping...", nullptr));
        actionValidate->setText(QCoreApplication::translate("MainWindow", "Validate", nullptr));
        actionOptions->setText(QCoreApplication::translate("MainWindow", "Options...", nullptr));
        actionTransform->setText(QCoreApplication::translate("MainWindow", "Transform", nullptr));
        actionDefine_pattern->setText(QCoreApplication::translate("MainWindow", "Define Pattern", nullptr));
        actionFill_with_pattern->setText(QCoreApplication::translate("MainWindow", "Fill With Pattern", nullptr));
        actionFlip_Vertical->setText(QCoreApplication::translate("MainWindow", "Flip Vertical", nullptr));
        actionFlip_Horizontal->setText(QCoreApplication::translate("MainWindow", "Flip Horizontal", nullptr));
        actionSkew->setText(QCoreApplication::translate("MainWindow", "Skew...", nullptr));
        actionImage_Size->setText(QCoreApplication::translate("MainWindow", "Image Size...", nullptr));
        actionCanvas_Size->setText(QCoreApplication::translate("MainWindow", "Canvas Size...", nullptr));
        actionFit_Image->setText(QCoreApplication::translate("MainWindow", "Fit Image...", nullptr));
        actionDuplicate->setText(QCoreApplication::translate("MainWindow", "Duplicate", nullptr));
        actionCrop->setText(QCoreApplication::translate("MainWindow", "Crop", nullptr));
        actionAutomatic_Crop->setText(QCoreApplication::translate("MainWindow", "Automatic Crop", nullptr));
        actionOutside_frame->setText(QCoreApplication::translate("MainWindow", "Outside Frame...", nullptr));
        actionOutside_drop_shadow->setText(QCoreApplication::translate("MainWindow", "Outside Drop Shadow...", nullptr));
        actionTransparent_colour->setText(QCoreApplication::translate("MainWindow", "Transparent Colour...", nullptr));
        actionAutomatic_transparency->setText(QCoreApplication::translate("MainWindow", "Automatic Transparency", nullptr));
        actionTransparency_mask->setText(QCoreApplication::translate("MainWindow", "Transparency Mask...", nullptr));
        actionText->setText(QCoreApplication::translate("MainWindow", "Text...", nullptr));
        actionCopyright->setText(QCoreApplication::translate("MainWindow", "Copyright...", nullptr));
        actionShow_selection->setText(QCoreApplication::translate("MainWindow", "Show Selection", nullptr));
        actionSelect_all->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
        actionSet_shape->setText(QCoreApplication::translate("MainWindow", "Set Shape", nullptr));
        actionInvert->setText(QCoreApplication::translate("MainWindow", "Invert", nullptr));
        actionManual_settings->setText(QCoreApplication::translate("MainWindow", "Manual Settings...", nullptr));
        actionCenter->setText(QCoreApplication::translate("MainWindow", "Center", nullptr));
        actionFit_ratio->setText(QCoreApplication::translate("MainWindow", "Fit Ratio", nullptr));
        actionContract->setText(QCoreApplication::translate("MainWindow", "Contract...", nullptr));
        actionExpand->setText(QCoreApplication::translate("MainWindow", "Expand...", nullptr));
        actionTransform_2->setText(QCoreApplication::translate("MainWindow", "Transform", nullptr));
        actionAntialiasing->setText(QCoreApplication::translate("MainWindow", "Antialiasing", nullptr));
        actionBounding_box->setText(QCoreApplication::translate("MainWindow", "Bounding Box", nullptr));
        actionPaste_and_text_bounding_box->setText(QCoreApplication::translate("MainWindow", "Paste and Text Bounding Box", nullptr));
        actionCopy_shape->setText(QCoreApplication::translate("MainWindow", "Copy Shape", nullptr));
        actionPaste_shape->setText(QCoreApplication::translate("MainWindow", "Paste Shape", nullptr));
        actionLoad_shape->setText(QCoreApplication::translate("MainWindow", "Load Shape", nullptr));
        actionSave_shape->setText(QCoreApplication::translate("MainWindow", "Save Shape", nullptr));
        actionBright_Contrast->setText(QCoreApplication::translate("MainWindow", "Bright/Contrast...", nullptr));
        actionHue_Saturation->setText(QCoreApplication::translate("MainWindow", "Hue/Saturation...", nullptr));
        actionColour_balance->setText(QCoreApplication::translate("MainWindow", "Colour Balance...", nullptr));
        actionGamma_correct->setText(QCoreApplication::translate("MainWindow", "Gamma Correct...", nullptr));
        actionAuto_levels->setText(QCoreApplication::translate("MainWindow", "Auto Levels", nullptr));
        actionAuto_contrast->setText(QCoreApplication::translate("MainWindow", "Auto Contrast", nullptr));
        actionMore_shadows->setText(QCoreApplication::translate("MainWindow", "More Shadows", nullptr));
        actionMore_highlights->setText(QCoreApplication::translate("MainWindow", "More Highlights", nullptr));
        actionLevels->setText(QCoreApplication::translate("MainWindow", "Levels...", nullptr));
        actionSwap_RGB_channel->setText(QCoreApplication::translate("MainWindow", "Swap RGB Channel...", nullptr));
        actionReplace_colour->setText(QCoreApplication::translate("MainWindow", "Replace Colour...", nullptr));
        actionReplace_colour_range->setText(QCoreApplication::translate("MainWindow", "Replace Colour Range...", nullptr));
        actionDuotone->setText(QCoreApplication::translate("MainWindow", "Duotone...", nullptr));
        actionDithering->setText(QCoreApplication::translate("MainWindow", "Dithering", nullptr));
        actionNegative->setText(QCoreApplication::translate("MainWindow", "Negative", nullptr));
        actionPosterize->setText(QCoreApplication::translate("MainWindow", "Posterize...", nullptr));
        actionHue_variation->setText(QCoreApplication::translate("MainWindow", "Hue Variation...", nullptr));
        actionSoften->setText(QCoreApplication::translate("MainWindow", "Soften", nullptr));
        actionSharpen->setText(QCoreApplication::translate("MainWindow", "Sharpen", nullptr));
        actionRelief->setText(QCoreApplication::translate("MainWindow", "Relief", nullptr));
        actionStylize->setText(QCoreApplication::translate("MainWindow", "Stylize", nullptr));
        actionAged_effect->setText(QCoreApplication::translate("MainWindow", "Aged Effect", nullptr));
        actionTexture->setText(QCoreApplication::translate("MainWindow", "Texture", nullptr));
        actionOther->setText(QCoreApplication::translate("MainWindow", "Other", nullptr));
        actionFilterbar->setText(QCoreApplication::translate("MainWindow", "Filterbar", nullptr));
        actionToolpalette->setText(QCoreApplication::translate("MainWindow", "Toolpalette", nullptr));
        actionShow_grid->setText(QCoreApplication::translate("MainWindow", "Show Grid...", nullptr));
        actionSnap_to_grid->setText(QCoreApplication::translate("MainWindow", "Snap To Grid", nullptr));
        actionZoom_in->setText(QCoreApplication::translate("MainWindow", "Zoom In", nullptr));
        actionZoom_out->setText(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
        actionOriginal_size->setText(QCoreApplication::translate("MainWindow", "Original Size", nullptr));
        actionAuto_zoom->setText(QCoreApplication::translate("MainWindow", "Auto Zoom", nullptr));
        actionFull_screen->setText(QCoreApplication::translate("MainWindow", "Full Screen", nullptr));
        actionAutomate_Batch->setText(QCoreApplication::translate("MainWindow", "Automate/Batch...", nullptr));
        actionSet_wallpaper->setText(QCoreApplication::translate("MainWindow", "Set Wallpaper", nullptr));
        actionExport_as_icon->setText(QCoreApplication::translate("MainWindow", "Export As Icon...", nullptr));
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "&Preferences", nullptr));
        actionInformation->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        actionScan->setText(QCoreApplication::translate("MainWindow", "Scan", nullptr));
#if QT_CONFIG(tooltip)
        actionScan->setToolTip(QCoreApplication::translate("MainWindow", "Scan", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRGB_Mode->setText(QCoreApplication::translate("MainWindow", "RGB Mode", nullptr));
        actionIndexed_Mode->setText(QCoreApplication::translate("MainWindow", "Indexed Mode", nullptr));
        actionBrightminus->setText(QCoreApplication::translate("MainWindow", "brightminus", nullptr));
#if QT_CONFIG(tooltip)
        actionBrightminus->setToolTip(QCoreApplication::translate("MainWindow", "Brightness (-)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBrightplus->setText(QCoreApplication::translate("MainWindow", "Brightplus", nullptr));
#if QT_CONFIG(tooltip)
        actionBrightplus->setToolTip(QCoreApplication::translate("MainWindow", "Brightness (+)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionContrastminus->setText(QCoreApplication::translate("MainWindow", "contrastminus", nullptr));
#if QT_CONFIG(tooltip)
        actionContrastminus->setToolTip(QCoreApplication::translate("MainWindow", "Contrast (-)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionContrastplus->setText(QCoreApplication::translate("MainWindow", "contrastplus", nullptr));
#if QT_CONFIG(tooltip)
        actionContrastplus->setToolTip(QCoreApplication::translate("MainWindow", "Contrast (+)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaturationminus->setText(QCoreApplication::translate("MainWindow", "saturationminus", nullptr));
#if QT_CONFIG(tooltip)
        actionSaturationminus->setToolTip(QCoreApplication::translate("MainWindow", "Saturation (-)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaturationplus->setText(QCoreApplication::translate("MainWindow", "saturationplus", nullptr));
#if QT_CONFIG(tooltip)
        actionSaturationplus->setToolTip(QCoreApplication::translate("MainWindow", "Saturation (+)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGammaCorrectminus->setText(QCoreApplication::translate("MainWindow", "gammaCorrectminus", nullptr));
#if QT_CONFIG(tooltip)
        actionGammaCorrectminus->setToolTip(QCoreApplication::translate("MainWindow", "Gamma Correct (-)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGammaCorrectplus->setText(QCoreApplication::translate("MainWindow", "gammaCorrectplus", nullptr));
#if QT_CONFIG(tooltip)
        actionGammaCorrectplus->setToolTip(QCoreApplication::translate("MainWindow", "Gamma Correct (+)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGrayScale->setText(QCoreApplication::translate("MainWindow", "Gray Scale", nullptr));
#if QT_CONFIG(tooltip)
        actionGrayScale->setToolTip(QCoreApplication::translate("MainWindow", "Gray Scale", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOldPhoto->setText(QCoreApplication::translate("MainWindow", "Old Photo", nullptr));
#if QT_CONFIG(tooltip)
        actionOldPhoto->setToolTip(QCoreApplication::translate("MainWindow", "Old Photography", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDustReduction->setText(QCoreApplication::translate("MainWindow", "Dust Reduction", nullptr));
#if QT_CONFIG(tooltip)
        actionDustReduction->setToolTip(QCoreApplication::translate("MainWindow", "Dust Reduction", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBlur->setText(QCoreApplication::translate("MainWindow", "Blur", nullptr));
#if QT_CONFIG(tooltip)
        actionBlur->setToolTip(QCoreApplication::translate("MainWindow", "Blur", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReinforce->setText(QCoreApplication::translate("MainWindow", "Reinforce", nullptr));
#if QT_CONFIG(tooltip)
        actionReinforce->setToolTip(QCoreApplication::translate("MainWindow", "Reinforce", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGradient->setText(QCoreApplication::translate("MainWindow", "gradient", nullptr));
#if QT_CONFIG(tooltip)
        actionGradient->setToolTip(QCoreApplication::translate("MainWindow", "Gradient", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRotate_CCW->setText(QCoreApplication::translate("MainWindow", "Rotate CCW", nullptr));
        actionRotate_CW->setText(QCoreApplication::translate("MainWindow", "Rotate CW", nullptr));
        actionOil_Paint->setText(QCoreApplication::translate("MainWindow", "&Oil Paint", nullptr));
        actionCharcoal_Drawing->setText(QCoreApplication::translate("MainWindow", "&Charcoal Drawing", nullptr));
        actionSwirl->setText(QCoreApplication::translate("MainWindow", "Swirl", nullptr));
        actionDonate->setText(QCoreApplication::translate("MainWindow", "Donate", nullptr));
        actionAcquire_image->setText(QCoreApplication::translate("MainWindow", "Acquire image...", nullptr));
        actionSelect_device->setText(QCoreApplication::translate("MainWindow", "Select source...", nullptr));
        actionSolarize->setText(QCoreApplication::translate("MainWindow", "Solarize", nullptr));
        actionWave->setText(QCoreApplication::translate("MainWindow", "Wave", nullptr));
        actionImplode->setText(QCoreApplication::translate("MainWindow", "Implode", nullptr));
        actionEmboss->setText(QCoreApplication::translate("MainWindow", "Emboss", nullptr));
        actionTrim->setText(QCoreApplication::translate("MainWindow", "Trim", nullptr));
        actionGaussian->setText(QCoreApplication::translate("MainWindow", "Gaussian", nullptr));
        actionImpulse->setText(QCoreApplication::translate("MainWindow", "Impulse", nullptr));
        actionLaplacian->setText(QCoreApplication::translate("MainWindow", "Laplacian", nullptr));
        actionPoisson->setText(QCoreApplication::translate("MainWindow", "Poisson", nullptr));
        actionMonoChromatic->setText(QCoreApplication::translate("MainWindow", "MonoChromatic", nullptr));
        actionEqualize->setText(QCoreApplication::translate("MainWindow", "Equalize", nullptr));
        actionCrop_To_Center->setText(QCoreApplication::translate("MainWindow", "Crop center", nullptr));
#if QT_CONFIG(tooltip)
        actionCrop_To_Center->setToolTip(QCoreApplication::translate("MainWindow", "Crop center", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAdd_Simple_Frame->setText(QCoreApplication::translate("MainWindow", "Simple frame", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd_Simple_Frame->setToolTip(QCoreApplication::translate("MainWindow", "Simple frame", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMotion_blur->setText(QCoreApplication::translate("MainWindow", "Motion blur", nullptr));
        actionNormalize->setText(QCoreApplication::translate("MainWindow", "Normalize", nullptr));
        action3D_frame->setText(QCoreApplication::translate("MainWindow", "3D frame", nullptr));
        actionExplode->setText(QCoreApplication::translate("MainWindow", "Explode", nullptr));
        actionDespeckle->setText(QCoreApplication::translate("MainWindow", "Despeckle", nullptr));
        actionSepia->setText(QCoreApplication::translate("MainWindow", "Sepia", nullptr));
        actionBlack_and_white->setText(QCoreApplication::translate("MainWindow", "Black and white", nullptr));
        actionOpacity->setText(QCoreApplication::translate("MainWindow", "Opacity...", nullptr));
        actionPlugins->setText(QCoreApplication::translate("MainWindow", "Plugins", nullptr));
        actionCheck_for_updates->setText(QCoreApplication::translate("MainWindow", "Check for updates...", nullptr));
        actionColour_Threshold->setText(QCoreApplication::translate("MainWindow", "Colour Threshold", nullptr));
        actionNew_layer->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        actionRemove_layer->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        actionClearHistory->setText(QCoreApplication::translate("MainWindow", "History", nullptr));
        actionClearClipboard->setText(QCoreApplication::translate("MainWindow", "Clipboard", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuRecent_Files->setTitle(QCoreApplication::translate("MainWindow", "Recent Files", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        menuPurge->setTitle(QCoreApplication::translate("MainWindow", "Purge", nullptr));
        menuImage->setTitle(QCoreApplication::translate("MainWindow", "&Image", nullptr));
        menuTransform->setTitle(QCoreApplication::translate("MainWindow", "Transform", nullptr));
        //menuSelection->setTitle(QCoreApplication::translate("MainWindow", "&Selection", nullptr));
        //menuAdjust->setTitle(QCoreApplication::translate("MainWindow", "&Adjust", nullptr));
        //menuFilter->setTitle(QCoreApplication::translate("MainWindow", "&Filter", nullptr));
        menuDeform->setTitle(QCoreApplication::translate("MainWindow", "Deform", nullptr));
        menuArtistic->setTitle(QCoreApplication::translate("MainWindow", "Artistic", nullptr));
        menuSoften->setTitle(QCoreApplication::translate("MainWindow", "Soften", nullptr));
        menuSharpen->setTitle(QCoreApplication::translate("MainWindow", "Sharpen", nullptr));
        menuFlatten->setTitle(QCoreApplication::translate("MainWindow", "Flatten", nullptr));
        menuEdges->setTitle(QCoreApplication::translate("MainWindow", "Edges", nullptr));
        menuNoise->setTitle(QCoreApplication::translate("MainWindow", "Noise", nullptr));
        menuFrame->setTitle(QCoreApplication::translate("MainWindow", "Frame", nullptr));
        menuColour->setTitle(QCoreApplication::translate("MainWindow", "Colour", nullptr));
        menuVisual_Effect->setTitle(QCoreApplication::translate("MainWindow", "Visual Effect", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Main ToolBar", nullptr));
        dockWidget_palette->setWindowTitle(QString());
#if QT_CONFIG(tooltip)
        toolButtonEraser->setToolTip(QCoreApplication::translate("MainWindow", "Eraser Tool", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonEraser->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonSprayCan->setToolTip(QCoreApplication::translate("MainWindow", "Spray Can", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonSprayCan->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonPointer->setToolTip(QCoreApplication::translate("MainWindow", "Pointer Tool", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonPointer->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonLine->setToolTip(QCoreApplication::translate("MainWindow", "Line Tool", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonLine->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonWand->setToolTip(QCoreApplication::translate("MainWindow", "Magic Wand", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonWand->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonPaintBrush->setToolTip(QCoreApplication::translate("MainWindow", "Paint Brush", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonPaintBrush->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonPaintBrushAdv->setToolTip(QCoreApplication::translate("MainWindow", "Advanced Paint Brush", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonPaintBrushAdv->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonBlur->setToolTip(QCoreApplication::translate("MainWindow", "Blur Tool", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonBlur->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonSmudge->setToolTip(QCoreApplication::translate("MainWindow", "Smudge Tool", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonSmudge->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonStamp->setToolTip(QCoreApplication::translate("MainWindow", "Clone Stamp", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonStamp->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonPaintBucket->setToolTip(QCoreApplication::translate("MainWindow", "Paint Bucket", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonPaintBucket->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonDropper->setToolTip(QCoreApplication::translate("MainWindow", "Colour Picker", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonDropper->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Extra ToolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
