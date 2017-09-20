#include "RecipeWidget.h"

RecipeWidget::RecipeWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

void RecipeWidget::Populate(QString header, QString image_path, QString description)
{
	ui.recipe_name_label->setText(header);
	ui.recipe_image_label->setStyleSheet("image: url(" + image_path + ");");
	ui.recipe_description_label->setText(description);
}

void RecipeWidget::OnClickMeButtonClicked() 
{
	// Event handling code here.
}