# Sovereign-Simulation: Environmental Telemetry \& Early Warning System



Project Idea:



This is a C++ console application that simulate a decentralized environmental monitoring and early warning network. The program models two decoupled physical infrastructure nodes communicating over a simulated LiFi connection. When running the application, the user will be able to trigger simulated severe weather events (like a Category 5 storm) and watch the system autonomously generate kinetic telemetry from an offshore node, transmit that data packet to an inland receiver, and output calculated civilian evacuation routes and priority alerts levels based on the severity of the storm.



Core Features:



* Environmental Telemetry Generation: The system mathematically simulates capturing wave kinetic energy and storm data payload and simulates a wireless transmission handoff between two independent system nodes.
* Decoupled Data Transmission: The program securely packages the generated telemetry into a structured data payload and simulates a wireless transmission handoff between two independent system nodes.
* Autonomous Alert \& Evacuation Logic: The receiving end of the system evaluates the incoming telemetry to automatically trigger scaled civilian evacuation protocols and output real-time alert statuses to the console.



Class Plan:



* NodeAlpha: Represents the offshore kinetic harvester. Responsible for simulating environmental data collection and formatting the outgoing telemetry payload.
* NodeBeta: Represents the terrestrial receiver. Responsible for ingesting the telemetry payload from NodeAlpha and executing the condition-based early warning and evacuation response logic.
* SensorSnapshot (Struct/Data Class): Acts as the secure data contract between the nodes. Responsible for holding the specific variables (kinetic energy, storm category, critical status) that are passed between Alpha and Beta.



Current Focus: 



I am currently focusing on building the foundational Object-Oriented C++ architecture. My immediate goal is defining the SensorSnapshot data packet and establishing a memory-safe, error-free data transmission bridge between NodeAlpha and NodeBeta classes within the main execution loop.







\## Weekly Project Stand-Up (Milestone 1)

&#x20;

\### What I Completed:

Establishing the core Object-Oriented architecture for the Environmental Early Warning Simulation. Created the `NodeAlpha` (harvester) and `NodeBeta` (receiver) classes, alongside the `SensorSnaoshot` data struct to handle simulated LiFi transmission logic.



\### Challenges:

Translating high-level systemic logic into strict C++ definitions required careful planning around memory management and ensuring the headers linked correctly within Visual Studio without circular dependencies.



\### Accomplishments:

Solidified proper C++ project structure, specifically how to separate class declarations (`.h`) from implementations (`.cpp`),  and successfully navigated the Git workflow from a `dev` branch Pull Request into `main`.



\### Next Steps:

Expanding the `NodeBeta` evacuation protocol to handle multi-tiered alerts and preparing the data model for the future Node Theta data sanctuary.

