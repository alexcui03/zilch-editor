#ifndef COSTUMEVIEW_H
#define COSTUMEVIEW_H

#include <QLabel>
#include <QImage>

#include "../Widget.h"

#define A "SS"
#define B "0.0.0"
#define C #A##"AAA"

constexpr const char *c = C;

class CostumeView : public Widget {
public:
	CostumeView(QWidget *parent = nullptr);
	~CostumeView();
	void resizeEvent(QResizeEvent *);
	void setImage(QImage *image);
public:
	QLabel *view;
};

#endif // COSTUMEVIEW_H
