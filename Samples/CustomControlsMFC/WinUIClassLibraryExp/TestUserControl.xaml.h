// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "winrt/Microsoft.UI.Xaml.h"
#include "winrt/Microsoft.UI.Xaml.Markup.h"
#include "winrt/Microsoft.UI.Xaml.Controls.Primitives.h"
#include "TestUserControl.g.h"

namespace winrt::WinUIClassLibraryExp::implementation
{
    struct TestUserControl : TestUserControlT<TestUserControl>
    {
        TestUserControl();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::WinUIClassLibraryExp::factory_implementation
{
    struct TestUserControl : TestUserControlT<TestUserControl, implementation::TestUserControl>
    {
    };
}
