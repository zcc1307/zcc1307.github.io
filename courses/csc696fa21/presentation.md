## Presentation information

### General information

All registered students will be asked to give a 60-min in-class presentation on a RL theory paper of their choice. The paper should either come from the provided list of papers, or upon instructor approval. Before their presentation, a student is required to schedule a meeting with the instructor to discuss their presentation materials (slides, lecture notes, etc). Throughout the course, students are highly encouraged to meet with the instructors regularly on paper choices, reading progress, etc.

Here are some useful guidelines for presentations: [Giving an Academic Talk](https://people.eecs.berkeley.edu/~jrs/speaking.html) by Prof. Jonathan Shewchuk; [Notes on Giving a Research Talk](https://cseweb.ucsd.edu//~elkan/254/speaking.html) by Prof. Charles Elkan.

### Paper presentation ideas (under construction)

Below are a few example research topics in reinforcement learning theory, each with a few "seed papers"; you can use the related work section in these papers, or use the "cited by" functionality in e.g. [google scholar](https://scholar.google.com/) to find more papers on the same topic. Please also refer to proceeding pages of recent machine learning / learning theory conferences and workshops for more presentation ideas, such as:

* [ICML](http://proceedings.mlr.press/v97/),
* [COLT](http://proceedings.mlr.press/v99/),
* [NeurIPS](https://papers.nips.cc/) ,
* [AISTATS](http://proceedings.mlr.press/v108/),
* [ALT](http://proceedings.mlr.press/v117/),
* [ICML 2020 workshop on theoretical foundations of RL](https://wensun.github.io/rl_theory_workshop_2020_ICML.github.io/#papers)
* [ICML 2021 workshop on RL theory](https://lyang36.github.io/icml2021_rltheory/)

Courses / tutorials in the RL theory research community may also have interesting reference papers good for presentation, for example:

* [Statistical Reinforcement Learning](https://nanjiang.cs.illinois.edu/cs598project/) by Nan Jiang
* [Bandits and RL](http://alekhagarwal.net/bandits_and_rl/#view3) by Alekh Agarwal and Alex Slivkins
* [RL theory virtual seminars](https://sites.google.com/view/rltheoryseminars/home) by Gergely Neu, Ciara Pike-Burke, and Csaba Szepesvari
* [COLT 2021 Tutorial: Statistical Foundations of Reinforcement Learning](https://rltheorybook.github.io/colt21tutorial) by Akshay Krishnamurthy and Wen Sun
* [AAAI 2020 and ALT 2019 Tutorials: Exploration-Exploitation in Reinforcement Learning](https://rlgammazero.github.io/) by Ronan Fruit, Mohammad Ghavamzadeh, Alessandro Lazaric, and Matteo Pirotta
* [FOCS 2020 Tutorial: Theoretical Foundations of Reinforcement Learning](https://hunch.net/~tforl/) by Alekh Agarwal, Akshay Krishnamurthy, and John Langford

#### PAC RL
* Andrew Wagenmaker, Max Simchowitz, Kevin Jamieson. Beyond No Regret: Instance-Dependent PAC Reinforcement Learning. 2021.
* Lihong Li, Michael L. Littman, Thomas J. Walsh, Alexander L. Strehl. Knows what it knows: a framework for self-aware learning. Machine Learning, 2011.
* Nan Jiang. [Notes on Rmax exploration.](http://nanjiang.cs.illinois.edu/files/cs598/note7.pdf)

#### Regret minimization in RL
* Thomas Jaksch, Ronald Ortner, Peter Auer. Near-optimal Regret Bounds for Reinforcement Learning. JMLR 2010.
* Mohammad Gheshlaghi Azar, Ian Osband, and Rémi Munos. Minimax regret bounds for reinforcement learning. ICML, 2017.
* Christoph Dann, Tor Lattimore, Emma Brunskill. Unifying PAC and Regret: Uniform PAC Bounds for Episodic Reinforcement Learning. NeurIPS 2017.
* Andrea Zanette, Emma Brunskill. Tighter Problem-Dependent Regret Bounds in Reinforcement Learning without Domain Knowledge using Value Function Bounds. ICML 2019.
* Max Simchowitz, Kevin Jamieson. Non-Asymptotic Gap-Dependent Regret Bounds for Tabular MDPs. NeurIPS 2019.
* Haike Xu, Tengyu Ma, Simon S. Du. Fine-Grained Gap-Dependent Bounds for Tabular MDPs via Adaptive Multi-Step Bootstrap. COLT 2021.

#### Q-learning
* Chi Jin, Zeyuan Allen-Zhu, Sebastien Bubeck, Michael I. Jordan. Is Q-learning Provably Efficient? NeurIPS 2018.
* Zihan Zhang, Yuan Zhou, Xiangyang Ji, Almost Optimal Model-Free Reinforcement Learning via Reference-Advantage Decomposition. NeurIPS 2020.
* Kunhe Yang, Lin F. Yang, Simon S. Du. Q-learning with Logarithmic Regret. AISTATS 2021.
* Kefan Dong, Yuanhao Wang, Xiaoyu Chen, Liwei Wang. Q-learning with UCB Exploration is Sample Efficient for Infinite-Horizon MDP. ICLR 2020. 

#### Function approximation
* Chi Jin, Zhuoran Yang, Zhaoran Wang, and Michael I. Jordan. Provably efficient reinforcement learning with linear function approximation. COLT 2020.
* Lin F. Yang and Mengdi Wang. Reinforcement Learning in feature space: Matrix bandit, kernels, and regret bound. ICML 2020.
* Andrea Zanette, Alessandro Lazaric, Mykel Kochenderfer, and Emma Brunskill. Learning near optimal policies with low inherent Bellman error. ICML 2020.
* Ruosong Wang, Ruslan Salakhutdinov, and Lin F. Yang. Reinforcement learning with general value function approximation: Provably efficient approach via bounded eluder dimension. NeurIPS 2020.
* Aditya Modi, Nan Jiang, Ambuj Tewari, Satinder Singh. Sample Complexity of Reinforcement Learning using Linearly Combined Model Ensembles. AISTATS 2020.
* Dongruo Zhou, Quanquan Gu, Csaba Szepesvari. Nearly minimax optimal reinforcement learning for linear mixture markov decision processes. COLT 2021.
* Dylan J. Foster, Alexander Rakhlin, David Simchi-Levi, Yunzong Xu. Instance-Dependent Complexity of Contextual Bandits and Reinforcement Learning: A Disagreement-Based Perspective.
* Zhuoran Yang, Chi Jin, Zhaoran Wang, Mengdi Wang, Michael I. Jordan. On Function Approximation in Reinforcement Learning: Optimism in the Face of Large State Spaces. NeurIPS 2020.

#### Nonparametric RL
* Tongyi Cao, Akshay Krishnamurthy. Provably adaptive reinforcement learning in metric spaces. NeurIPS 2020.
* Sean R. Sinclair, Tianyu Wang, Gauri Jain, Siddhartha Banerjee, Christina Lee Yu. Adaptive Discretization for Model-Based Reinforcement Learning. NeurIPS 2020.
* Ahmed Touati, Adrien Ali Taiga, Marc G. Bellemare. Zooming for Efficient Model-Free Reinforcement Learning in Metric Spaces. 2020.
* Zhao Song, Wen Sun. Efficient Model-free Reinforcement Learning in Metric Spaces. 2019.
* Devavrat Shah, Qiaomin Xie. Q-Learning with Nearest Neighbors. NeurIPS 2018.

#### Model selection in online RL
* Jonathan N. Lee, Aldo Pacchiano, Vidya Muthukumar, Weihao Kong, Emma Brunskill. Online Model Selection for Reinforcement Learning with Function Approximation. AISTATS 2021.
* Aldo Pacchiano, Christoph Dann, Claudio Gentile, Peter Bartlett. Regret Bound Balancing and Elimination for Model Selection in Bandits and RL. 2020. 
* Ashok Cutkosky, Christoph Dann, Abhimanyu Das, Claudio Gentile, Aldo Pacchiano, Manish Purohit. Dynamic Balancing for Model Selection in Bandits and RL. ICML 2021.

#### Multi-task RL
* Jiachen Hu, Xiaoyu Chen, Chi Jin, Lihong Li, Liwei Wang. Near-optimal Representation Learning for Linear Bandits and Linear RL. ICML 2021. 
* Rui Lu, Gao Huang, Simon S. Du. On the Power of Multitask Representation Learning in Linear MDP. 2021.

#### RL with constraints
* Sobhan Miryoosefi, Kianté Brantley, Hal Daumé III, Miroslav Dudik, Robert Schapire. Reinforcement Learning with Convex Constraints. NeurIPS 2019.
* Kianté Brantley, Miroslav Dudik, Thodoris Lykouris, Sobhan Miryoosefi, Max Simchowitz, Aleksandrs Slivkins, Wen Sun. Constrained episodic reinforcement learning in concave-convex and knapsack settings. NeurIPS 2020.
* Xiaoyu Chen, Jiachen Hu, Lihong Li, Liwei Wang. Efficient Reinforcement Learning in Factored MDPs with Application to Constrained RL. ICLR 2021. 

#### Corruption-robust RL
* Thodoris Lykouris, Max Simchowitz, Alex Slivkins, Wen Sun. Corruption-robust exploration in episodic reinforcement learning. COLT 2021.
* Yifang Chen, Simon S. Du, Kevin Jamieson. Improved Corruption Robust Algorithms for Episodic Reinforcement Learning. ICML 2021. 
* Tianhao Wu, Yunchang Yang, Simon Du, Liwei Wang. On Reinforcement Learning with Adversarial Corruption and Its Application to Block MDP. ICML 2021.
* Xuezhou Zhang, Yiding Chen, Jerry Zhu, Wen Sun. Corruption-Robust Offline Reinforcement Learning. 2021. 
* Tiancheng Jin, Longbo Huang, and Haipeng Luo. The Best of Both Worlds: Stochastic and Adversarial Episodic MDPs with Unknown Transition. 2021.

#### Reward-free exploration
* Chi Jin, Akshay Krishnamurthy, Max Simchowitz, Tiancheng Yu. Reward-Free Exploration for Reinforcement Learning. ICML 2020.
* Emilie Kaufmann, Pierre Ménard, Omar Darwiche Domingues, Anders Jonsson, Edouard Leurent, Michal Valko. Adaptive Reward-Free Exploration. ALT 2021.
* Ruosong Wang, Simon S. Du, Lin F. Yang, Ruslan Salakhutdinov. On Reward-Free Reinforcement Learning with Linear Function Approximation. NeurIPS 2020.

#### RL in adversarial MDPs
* Tiancheng Jin and Haipeng Luo. Simultaneously Learning Stochastic and Adversarial Episodic MDPs with Known Transition. NeurIPS 2020.
* Chi Jin, Tiancheng Jin, Haipeng Luo, Suvrit Sra, and Tiancheng Yu. Learning Adversarial Markov Decision Processes with Bandit Feedback and Unknown Transition.



#### Imitation learning

##### Interactive Imitation Learning

* Hal Daumé III, John Langford, Daniel Marcu. Search-based Structured Prediction. Machine Learning Journal 2009.
* Stephane Ross, Drew Bagnell. Efficient Reductions for Imitation Learning. AISTATS 2010.
* Stephane Ross, Geoffrey J. Gordon, J. Andrew Bagnell. A Reduction of Imitation Learning and Structured Prediction to No-Regret Online Learning. AISTATS 2011.
* Stephane Ross, J. Andrew Bagnell. Reinforcement and Imitation Learning via Interactive No-Regret Learning. NeurIPS 2014.
* Wen Sun, Arun Venkatraman, Geoffrey J. Gordon, Byron Boots, J. Andrew Bagnell. Deeply AggreVaTeD: differentiable imitation learning for sequential prediction. ICML 2017.
* Ching-An Cheng and Byron Boots. Convergence of Value Aggregation for Imitation Learning. AISTATS 2018.
* Wen Sun, Anirudh Vemula, Byron Boots, J. Andrew Bagnell. Provably Efficient Imitation Learning from Observation Alone. ICML 2019.

##### Apprenticeship Learning and Inverse Reinforcement Learning

* Pieter Abbeel and Andrew Y. Ng. Apprenticeship Learning via Inverse Reinforcement Learning. ICML 2004.
* Brian D. Ziebart, Andrew Maas, J.Andrew Bagnell, Anind K. Dey. Maximum Entropy Inverse Reinforcement Learning. AAAI 2008.
* Brian D. Ziebart, J.Andrew Bagnell, Anind K. Dey. Modeling Interaction via the Principle of Maximum Causal Entropy. ICML 2010.
* Umar Syed and Robert E. Schapire. A Game-Theoretic Approach to Apprenticeship Learning. NeurIPS 2007.
* Alekh Agarwal, Ashwinkumar Badanidiyuru, Miroslav Dudik, Robert Schapire, Aleksandrs Slivkins, Miro Dudík. Robust Multi-objective Learning with Mentor Feedback. COLT 2014.
* Jonathan Ho, Stefano Ermon. Generative Adversarial Imitation Learning. NeurIPS 2016.
* Kareem Amin, Nan Jiang, Satinder Singh. Repeated Inverse Reinforcement Learning. NeurIPS 2017.





