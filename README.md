# ALS Refactored Locomotion

A production-ready C++ character locomotion, dynamic mantling, and ragdoll recovery framework in **Unreal Engine 5** maintained and extended by **Vivekanand Rajbhar (WebSpider Studios)**.

This project modernizes the industry-standard Advanced Locomotion System V4 with clean C++ architecture, modern Linked Animation Layers, Control Rig foot IK, and full multiplayer replication.

---

## ⚡ Technical Highlights

### 1. Modern Animation Pipeline (Linked Anim Layers)
* **Decoupled Architecture:** Replaced legacy monolithic animation graphs with modular Linked Animation Blueprints (`AlsAnimationInstance`). This allows swapping character skeleton meshes or overlay weapon poses without duplicating locomotion logic.
* **Blend Poses by Gameplay Tag:** Anim graph transitions evaluate dynamic tags (e.g. `Als.Gait.Sprinting`, `Als.Stance.Crouching`) rather than querying raw booleans, eliminating state desync.

### 2. Multi-Gait Locomotion & Rotation Modes
* **Gait Blending:** Seamless procedural acceleration and deceleration curves for Walking, Running, and Sprinting with footstep timing curves.
* **Rotation Modes:**
  * **Velocity Direction:** Natural body alignment with movement vector during free-roam traversal.
  * **Looking Direction:** Strafe mechanics with procedural spine lean and torso twisting toward crosshairs.
  * **Aiming Direction:** Snappy combat posture with weapon camera focus and turn-in-place animation montages.

### 3. Dynamic Mantling & Physical Ragdoll
* **2-Stage Mantle Tracing:** Performs forward capsule sweeps followed by downward ledge detection to calculate obstacle crest height and thickness. Dynamically selects low vaults, high vaults, or climb-up montages with root-motion synchronization.
* **Ragdoll to Get-Up Blend:** Seamlessly activates physics simulation on sudden impacts. When the character comes to rest, it calculates whether the actor is facing up or down and triggers the matching get-up montage with pose snapshot caching to prevent visual snapping.

### 4. Foot Placement & Terrain IK
* Utilizes Unreal Engine's **Control Rig** with trace offsets to dynamically align feet and ankles to stairs, slopes, and rocky geometry. Pelvis height lowers smoothly to maintain grounded balance.

---

## 📁 Repository Structure

```
Plugins/ALS/
├── Source/
│   ├── ALS/                 # Core locomotion character, movement component, and settings
│   ├── ALSCamera/           # Custom third-person camera component with pivot lag
│   ├── ALSEditor/           # Animation modifier utilities and custom anim graph nodes
│   └── ALSExtras/           # Example character implementations and player input
└── Content/                 # Anim sequences, blend spaces, and Control Rig assets
Source/                      # Standalone UE5 project target and game module
```

---

## 🛠️ How to Build & Run

### Requirements
* Unreal Engine 5.8 (or 5.7 / 5.4)
* Visual Studio 2022 (with *Game Development with C++* workload)
* Windows 10/11 64-bit

### Steps
1. Clone the repository:
   ```bash
   git clone https://github.com/VR-WebSpider/ALSRefactoredLocomotion.git
   ```
2. Right-click `ALSRefactoredLocomotion.uproject` → **Generate Visual Studio project files**.
3. Open `ALSRefactoredLocomotion.sln` in Visual Studio 2022.
4. Set build configuration to **Development Editor** | **Win64**.
5. Build and launch (F5).
6. Open the demo map in `/ALS/Maps/` to test traversal over ramps, vaults, stairs, and ragdoll test areas.

---

## 📜 Credits & License

* Maintained and extended by **Vivekanand Rajbhar (WebSpider Studios)**.
* Built upon foundational C++ locomotion architecture authored by **Sixze** and community contributors.
* Licensed under the [MIT License](LICENSE).