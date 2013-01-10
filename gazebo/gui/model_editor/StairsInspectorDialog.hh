/*
 * Copyright 2012 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#include <string>
#ifndef _STAIRS_INSPECTOR_DIALOG_HH_
#define _STAIRS_INSPECTOR_DIALOG_HH_

#include "gazebo/gui/qt.h"

namespace gazebo
{
  namespace gui
  {
    class StairsInspectorDialog : public QDialog
    {
      Q_OBJECT

      /// \brief Constructor
      /// \param[in] _parent Parent QWidget.
      public: StairsInspectorDialog(QWidget *_parent = 0);

      /// \brief Destructor
      public: ~StairsInspectorDialog();

      /// \brief Get starting position (bottom-end) of the staircase in pixels.
      public: QPointF GetStartPosition() const;

      /// \brief Get the width the staircase in pixels.
      /// \return Staircase width in pixels.
      public: double GetWidth() const;

      /// \brief Get the depth the staircase in pixels
      /// \return Staircase depth in pixels.
      public: double GetDepth() const;

      /// \brief Get the height the staircase in pixels
      /// \return Staircase height in pixels.
      public: double GetHeight() const;

      /// \brief Get the number of steps in the staircase.
      /// \return Number of steps in the staircase.
      public: int GetSteps() const;

      /// \brief Set the name of the staircase.
      /// \param[in] _name Name to set to.
      public: void SetName(const std::string &_name);

      /// \brief Set the starting position of the staircase.
      /// \param[in] _pos Starting position in pixels.
      public: void SetStartPosition(const QPointF &_pos);

      /// \brief Set the width of the staircase.
      /// \param[in] _pos Width in pixels.
      public: void SetWidth(double _width);

      /// \brief Set the depth of the staircase.
      /// \param[in] _pos depth in pixels.
      public: void SetDepth(double _depth);

      /// \brief Set the height of the staircase.
      /// \param[in] _pos height in pixels.
      public: void SetHeight(double _height);

      /// \brief Set the number of steps in the staircase.
      /// \param[in] _pos Number of steps.
      public: void SetSteps(int _steps);

      /// \brief Qt signal emitted to indicate that changes should be applied.
      Q_SIGNALS: void Applied();

      /// \brief Qt callback when the Cancel button is pressed.
      private slots: void OnCancel();

      /// \brief Qt callback when the Apply button is pressed.
      private slots: void OnApply();

      /// \brief Qt callback when the Ok button is pressed.
      private slots: void OnOK();

      /// \brief Spin box for configuring the X starting position of the
      /// staircase.
      private: QDoubleSpinBox *startXSpinBox;

      /// \brief Spin box for configuring the Y starting position of the
      /// staircase.
      private: QDoubleSpinBox *startYSpinBox;

      /// \brief Spin box for configuring the width of the staircase.
      private: QDoubleSpinBox *widthSpinBox;

      /// \brief Spin box for configuring the depth of the staircase.
      private: QDoubleSpinBox *depthSpinBox;

      /// \brief Spin box for configuring the height of the staircase.
      private: QDoubleSpinBox *heightSpinBox;

      /// \brief Spin box for configuring the number of steps in the staircase.
      private: QSpinBox *stepsSpinBox;

      /// \brief Label that displays the name of the staircase
      private: QLabel* stairsNameLabel;
    };
  }
}

#endif
