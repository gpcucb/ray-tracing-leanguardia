cmake_minimum_required(VERSION 3.6)
project(Projects)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp RGB.cpp RGB.h Vector.cpp Vector.h Camera.cpp Camera.h Sphere.cpp Sphere.h Triangle.cpp Triangle.h Ray.cpp Ray.h Intersection.cpp Intersection.h RayTracer.cpp RayTracer.h Object.h)
add_executable(Projects ${SOURCE_FILES})