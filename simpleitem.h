#pragma once
#include <QtWidgets>


class SimpleItem : public QGraphicsItem
{
public:
  //SimpleItem();
  SimpleItem(QString);
private:
  enum {nPenWidth = 2};
  QString str;

public:
  virtual QRectF boundingRect() const;
  virtual void paint(QPainter* ppainter,
                     const QStyleOptionGraphicsItem*,
                     QWidget*
                     );
  virtual void mousePressEvent(QGraphicsSceneMouseEvent* pe);
  virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* pe);
};

