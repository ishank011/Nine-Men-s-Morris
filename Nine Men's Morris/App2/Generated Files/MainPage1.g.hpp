﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "MainPage1.xaml.h"

void ::App2::MainPage1::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage1.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::App2::MainPage1::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                this->image = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 2:
            {
                this->board = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 3:
            {
                this->image111 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 4:
            {
                this->image121 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 5:
            {
                this->image131 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 6:
            {
                this->image141 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 7:
            {
                this->image151 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 8:
            {
                this->image161 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 9:
            {
                this->image171 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 10:
            {
                this->image181 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 11:
            {
                this->image191 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 12:
            {
                this->image211 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 13:
            {
                this->image221 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 14:
            {
                this->image231 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 15:
            {
                this->image241 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 16:
            {
                this->image251 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 17:
            {
                this->image261 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 18:
            {
                this->image271 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 19:
            {
                this->image281 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 20:
            {
                this->image291 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 21:
            {
                this->button01 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button01))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button_Click1);
            }
            break;
        case 22:
            {
                this->button11 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button11))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button1_Click1);
            }
            break;
        case 23:
            {
                this->button21 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button21))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button2_Click1);
            }
            break;
        case 24:
            {
                this->button91 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button91))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button9_Click1);
            }
            break;
        case 25:
            {
                this->button211 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button211))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button21_Click1);
            }
            break;
        case 26:
            {
                this->button221 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button221))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button22_Click1);
            }
            break;
        case 27:
            {
                this->button231 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button231))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button23_Click1);
            }
            break;
        case 28:
            {
                this->button141 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button141))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button14_Click1);
            }
            break;
        case 29:
            {
                this->button41 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button41))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button4_Click1);
            }
            break;
        case 30:
            {
                this->button71 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button71))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button7_Click1);
            }
            break;
        case 31:
            {
                this->button161 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button161))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button16_Click1);
            }
            break;
        case 32:
            {
                this->button191 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button191))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button19_Click1);
            }
            break;
        case 33:
            {
                this->button201 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button201))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button20_Click1);
            }
            break;
        case 34:
            {
                this->button131 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button131))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button13_Click1);
            }
            break;
        case 35:
            {
                this->button51 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button51))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button5_Click1);
            }
            break;
        case 36:
            {
                this->button31 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button31))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button3_Click1);
            }
            break;
        case 37:
            {
                this->button101 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button101))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button10_Click1);
            }
            break;
        case 38:
            {
                this->button181 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button181))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button18_Click1);
            }
            break;
        case 39:
            {
                this->button81 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button81))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button8_Click1);
            }
            break;
        case 40:
            {
                this->button121 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button121))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button12_Click1);
            }
            break;
        case 41:
            {
                this->button171 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button171))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button17_Click1);
            }
            break;
        case 42:
            {
                this->button151 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button151))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button15_Click1);
            }
            break;
        case 43:
            {
                this->button111 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button111))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button11_Click1);
            }
            break;
        case 44:
            {
                this->button61 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button61))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::MainPage1::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage1::button6_Click1);
            }
            break;
        case 45:
            {
                this->image1_11 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 46:
            {
                this->image1_21 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 47:
            {
                this->image1_31 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 48:
            {
                this->image1_41 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 49:
            {
                this->image2_11 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 50:
            {
                this->image2_21 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 51:
            {
                this->image2_31 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 52:
            {
                this->image2_41 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 53:
            {
                this->R1x = safe_cast<::Windows::UI::Xaml::Shapes::Rectangle^>(__target);
            }
            break;
        case 54:
            {
                this->imagep1x = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 55:
            {
                this->imagep2x = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 56:
            {
                this->mediaElementf = safe_cast<::Windows::UI::Xaml::Controls::MediaElement^>(__target);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::App2::MainPage1::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}


