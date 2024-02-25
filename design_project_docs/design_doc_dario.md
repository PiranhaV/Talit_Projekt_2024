# Designdocument Solar-Tracker #
## First Concept Idea ##
The first prototype will consist of a baseplate made from either wood or 3D printed plastic, on which two stepper-motors will be mounted. The motors will be mounted with a 90° angle to each other. The lower motor will adjust the the azimuth and the second one will control the elevation. Initially these motors will be controlled manually. 

In a second step a second mounting system will be constructed to hold an infrared camera with which the sun will be tracked. This mounting will be adjusted so that the sun is always centered on the infrared sensor. The azimuth and elevation data gained this way will then be applied to the solar mountings in real time.

A simple model of the mounting can be found in the motor_placement.obj file.
The mouting and the solar panel are very roughly estimated to weigh around 60-80g.

The calculations required for the movements will be made using an Arduino of yet to be defined model.

## Possible Issues ##
- getting the information from the infrared sensor
    - processing the data with an Arduino (computing power)
- 3D printing, as none of us have any experience with it (minor issue)

## Timeline ##
- 19.02.2024: finding and ordering parts (starting mounting design)
- 26.02.2024: if not done: mouting design otherwise printing/building the first prototype of mounting
- 04.03.2024: if possible first testing of motors
- 11.03.2024: assembling first manually controlled prototype
- 18.03.2024: testing
- 25.03.2024: start of work on sun tracking module (testing of data extraction and processing)
- 01.04.2024: first tracking software prototype (testing)
- 08.04.2024: first compound testing
- later: further development

## Checkups ##
As we currently don't have enough information on when exactly we want to present a milestone, we would propose to check in every 3-4 weeks and show our progress.
