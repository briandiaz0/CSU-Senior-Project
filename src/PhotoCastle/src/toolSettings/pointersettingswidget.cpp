#include "pointersettingswidget.h"
#include "ui_pointersettingswidget.h"

PointerSettingsWidget::PointerSettingsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PointerSettingsWidget)
{
    ui->setupUi(this);

    connect(ui->checkBoxStroke, SIGNAL(clicked()), this, SIGNAL(settingsChanged()));
    connect(ui->checkBoxFill, SIGNAL(clicked()), this, SIGNAL(settingsChanged()));

    ui->checkBoxStroke->setHidden(true);
    ui->checkBoxFill->setHidden(true);
    ui->square_sel->setHidden(true); // Hide until we have more selection types available
    ui->circle_sel->setHidden(true);
}

PointerSettingsWidget::~PointerSettingsWidget()
{
    delete ui;
}

bool PointerSettingsWidget::stroke() const
{
    return ui->checkBoxStroke->isChecked();
}

bool PointerSettingsWidget::fill() const
{
    return ui->checkBoxFill->isChecked();
}

void PointerSettingsWidget::on_square_sel_clicked(bool checked)
{
    if(checked)
    {
        ui->square_sel->setChecked(true);
        ui->circle_sel->setChecked(false);
    }
}

void PointerSettingsWidget::on_circle_sel_clicked(bool checked)
{
    if(checked)
    {
        ui->square_sel->setChecked(false);
        ui->circle_sel->setChecked(true);
    }
}
