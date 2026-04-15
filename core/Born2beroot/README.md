
This project has been created as part of the 42 curriculum by bgebreeg.

## Born2BeRoot

Description

Born2BeRoot is a system administration project from the 42 curriculum.  
The goal of this project is to set up a secure Linux server inside a virtual machine while following strict rules related to security, user management, and system configuration.

This project introduces basic but essential concepts such as:
- Installing and configuring a Linux operating system
- Managing users and groups
- Applying security rules
- Using sudo correctly
- Understanding system services
- Monitoring the system

The project helps beginners understand how a real server is configured and secured.

### Project Description and Technical Choices

#### Operating System Choice
 
For this project, Debian was chosen as the operating system.

  Debian – Pros and Cons
  
  ### Pros
- Very stable and reliable
- Large community and documentation
- Simple package management with `apt`
- Beginner-friendly

Cons:
- Packages may be older compared to other distributions
- Less enterprise-focused than Rocky Linux

#### Rocky Linux – Pros and Cons
 Pros:

- Enterprise-grade stability
- Close to Red Hat Enterprise Linux (RHEL)
- Uses SELinux by default

Cons:

- Slightly more complex for beginners
- Less beginner-friendly documentation

Conclusion:

Debian was chosen because it is easier to understand and manage for beginners.

---

### Security Modules: AppArmor vs SELinux

#### AppArmor
- Easier to configure and understand
- Profile-based security
- Used by default on Debian

#### SELinux
- Very powerful and strict
- Policy-based security
- More complex configuration
- Default on Rocky Linux

Choice:
AppArmor was chosen because it is simpler and better suited for beginners.

---

### Firewall: UFW vs firewalld

#### UFW (Uncomplicated Firewall)
- Very simple syntax
- Beginner-friendly
- Perfect for basic firewall rules

#### firewalld
- More flexible and powerful
- Uses zones and services
- More complex to manage

Choice: 
UFW was chosen because it is easy to configure and understand.

---

### Virtualization: VirtualBox vs UTM

#### VirtualBox
- Available on many platforms
- Easy to use
- Well documented
- Works well with Debian

#### UTM
- Mainly used on macOS (Apple Silicon)
- Simple interface
- Limited compared to VirtualBox

Choice: 
VirtualBox was chosen for its compatibility and extensive documentation.

---

### Main Design Choices

- Partitioning:  Manual partitioning with encrypted LVM
- Security policies:  AppArmor enabled, strong password rules, limited sudo access
- User management:  One main user added to sudo group
- Services installed: SSH, UFW, sudo, monitoring tools
- Network:   SSH configured on a custom port

---

## Instructions

### Requirements
- VirtualBox installed
- Debian ISO image
- Basic knowledge of terminal commands

### Installation Steps
1. Create a new virtual machine in VirtualBox
2. Install Debian (minimal installation)
3. Configure users, groups, and sudo
4. Set up UFW and SSH
5. Enable AppArmor
6. Apply password and security rules
7. Configure monitoring script (if required by subject)

### Running the Project
This project does not require compilation.  
Once the virtual machine is running, you can:
- Log in with your user
- Use `sudo` for administrative tasks
- Connect via SSH if configured

---

### Resources

Documentation & Tutorials
- https://github.com/Vikingu-del/Born2beRoot?tab=readme-ov-file
- https://youtu.be/OQEdjt38ZJA?si=UJNlmTDKctk9u5Gr 
- https://youtu.be/s2eM7L_etzo?si=VNsusBQ6z9IOPwuA
- https://github.com/Vikingu-del/Born2beRoot?tab=readme-ov-file
- https://noreply.gitbook.io/born2beroot/bonus-services/wordpress
- 42 Born2BeRoot subject PDF  

    AI Usage

AI tools were used to:
- Clarify Linux concepts
- Help structure explanations
- Improve README clarity and organization

AI was not used to bypass project rules or automate system configuration.  
All configurations were done manually by the student.

  Final Notes

Born2BeRoot is a foundational project that builds strong system administration skills.  
It focuses on security, discipline, and understanding how Linux works internally, which are essential skills for future projects.




