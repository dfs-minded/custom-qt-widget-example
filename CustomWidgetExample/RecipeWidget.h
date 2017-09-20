#pragma once

#include <QWidget>
#include <QString>
#include "ui_RecipeWidget.h"

class RecipeWidget : public QWidget
{
	Q_OBJECT

public:
	RecipeWidget(QWidget *parent = Q_NULLPTR);
	~RecipeWidget() = default;

	void Populate(QString header, QString image_path, QString description);

signals:
	void UserSelectedRecipe(int recipe_id);

private:
	Ui::RecipeWidget ui;

private slots:
	void OnClickMeButtonClicked();
};
