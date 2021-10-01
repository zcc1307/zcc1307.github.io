## Presentation information

### General information

All registered students will be asked to give a 60-min in-class presentation on a RL theory paper of their choice. The paper should either come from the provided list of papers, or upon instructor approval. Before their presentation, a student is required to schedule a meeting with the instructor to discuss their presentation materials (slides, lecture notes, etc). Throughout the course, students are highly encouraged to meet with the instructors regularly on paper choices, reading progress, etc.

Here are some useful guidelines for: 

* reading papers: [How to read a paper](http://ccr.sigcomm.org/online/files/p83-keshavA.pdf) by Prof. Srinivasan Keshav; [Reading in Algorithms: Paper-Reading Survival Kit](https://cs.stanford.edu/~rishig/courses/ref/paper-reading-technical.pdf) by Prof. Tim Roughgarden.
* presentations: [Giving an Academic Talk](https://people.eecs.berkeley.edu/~jrs/speaking.html) by Prof. Jonathan Shewchuk; [Notes on Giving a Research Talk](https://cseweb.ucsd.edu//~elkan/254/speaking.html) by Prof. Charles Elkan.

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

#### RL with a generative model
* Mohammad Gheshlaghi Azar, Remi Munos, and Hilbert J Kappen. Minimax pac bounds on the sample complexity of reinforcement learning with a generative model. Machine learning, 2013
* Gen Li, Yuting Wei, Yuejie Chi, Yuantao Gu, Yuxin Chen. Breaking the Sample Size Barrier in Model-Based Reinforcement Learning with a Generative Model. NeurIPS 2020.
* Aaron Sidford, Mengdi Wang, Xian Wu, Lin F. Yang, and Yinyu Ye. Near-optimal time and sample complexities for solving discounted markov decision process with a generative model. NeurIPS 2018.
* Alekh Agarwal, Sham Kakade, and Lin F. Yang. Model-based reinforcement learning with a generative model is minimax optimal. COLT 2020.

#### PAC RL
* Andrew Wagenmaker, Max Simchowitz, Kevin Jamieson. Beyond No Regret: Instance-Dependent PAC Reinforcement Learning. 2021.
* Lihong Li, Michael L. Littman, Thomas J. Walsh, Alexander L. Strehl. Knows what it knows: a framework for self-aware learning. Machine Learning, 2011.
* Omar Darwiche Domingues, Pierre Ménard, Emilie Kaufmann, Michal Valko. Episodic Reinforcement Learning in Finite MDPs: Minimax Lower Bounds Revisited. ALT 2021.


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

#### Reward-free exploration; Active learning
* Chi Jin, Akshay Krishnamurthy, Max Simchowitz, Tiancheng Yu. Reward-Free Exploration for Reinforcement Learning. ICML 2020.
* Emilie Kaufmann, Pierre Ménard, Omar Darwiche Domingues, Anders Jonsson, Edouard Leurent, Michal Valko. Adaptive Reward-Free Exploration. ALT 2021.
* Ruosong Wang, Simon S. Du, Lin F. Yang, Ruslan Salakhutdinov. On Reward-Free Reinforcement Learning with Linear Function Approximation. NeurIPS 2020.
* Pierre Ménard, Omar Darwiche Domingues, Emilie Kaufmann, Anders Jonsson, Edouard Leurent, Michal Valko. Fast active learning for pure exploration in reinforcement learning. ICML 2021.

#### RL in adversarial MDPs
* Eyal Even-Dar, Sham M Kakade, and Yishay Mansour. Online Markov decision processes. Mathematics of Operations Research, 2009.
* Zimin, A. and Neu, G. Online learning in episodic markovian decision processes by relative entropy policy search. NeurIPS 2013.
* Rosenberg, A. and Mansour, Y. Online convex optimization in adversarial markov decision processes. ICML 2019.
* Tiancheng Jin and Haipeng Luo. Simultaneously Learning Stochastic and Adversarial Episodic MDPs with Known Transition. NeurIPS 2020.
* Chi Jin, Tiancheng Jin, Haipeng Luo, Suvrit Sra, and Tiancheng Yu. Learning Adversarial Markov Decision Processes with Bandit Feedback and Unknown Transition.

#### Stochastic games
* Chen-Yu Wei, Yi-Te Hong, Chi-Jen Lu. Online Reinforcement Learning in Stochastic Games. NeurIPS 2017.
* Yu Bai, Chi Jin, and Tiancheng Yu. Near-optimal reinforcement learning with self-play. NeurIPS 2020.
* Qiaomin Xie, Yudong Chen, Zhaoran Wang, and Zhuoran Yang. Learning Zero-Sum Simultaneous Move Markov Games Using Function Approximation and Correlated Equilibrium. COLT 2020.
* Qinghua Liu, Tiancheng Yu, Yu Bai, and Chi Jin. A sharp analysis of model-based reinforcement learning with self-play. ICML 2021.
* Yi Tian, Yuanhao Wang, Tiancheng Yu, Suvrit Sra. Online Learning in Unknown Markov Games. ICML 2021.

#### RL and control
* Naman Agarwal, Brian Bullins, Elad Hazan, Sham M Kakade, and Karan Singh. Online control with adversarial disturbances. ICML 2019.
* Dylan J Foster and Max Simchowitz. Logarithmic Regret for Adversarial Online Control. ICML 2020.
* Naman Agarwal, Elad Hazan, Karan Singh. Logarithmic regret for online control. NeurIPS 2019.
* Gautam Goel and Babak Hassibi. The power of linear controllers in LQR control. 2020.
* Yasin Abbasi-Yadkori and Csaba Szepesvari. Regret bounds for the adaptive control of linear quadratic systems. COLT 2011.
* Alon Cohen, Tomer Koren, and Yishay Mansour. Learning linear-quadratic regulators efficiently with only sqrt(T) regret. ICML 2019.
* Sarah Dean, Horia Mania, Nikolai Matni, Benjamin Recht, and Stephen Tu. Regret bounds for robust adaptive control of the linear quadratic regulator. NeurIPS 2018.

#### Policy optimization
* Alekh Agarwal, Sham M. Kakade, Jason D. Lee, and Gaurav Mahajan. On the theory of policy gradient methods: Optimality, approximation, and distribution shift. 2020.
* Jincheng Mei, Chenjun Xiao, Csaba Szepesvari, and Dale Schuurmans. On the global convergence rates of softmax policy gradient methods, 2020.
* Yasin Abbasi-Yadkori, Peter Bartlett, Kush Bhatia, Nevena Lazic, Csaba Szepesvari, and Gellert Weisz. POLITEX: Regret bounds for policy iteration using expert prediction. ICML 2019.
* Boyi Liu, Qi Cai, Zhuoran Yang, and Zhaoran Wang. Neural proximal/trust region policy optimization attains globally optimal policy. 2019. 
* Qi Cai, Zhuoran Yang, Chi Jin, Zhaoran Wang. Provably efficient exploration in policy optimization. ICML 2020.

#### RL in rich-observation MDPs 
* Christoph Dann, Nan Jiang, Akshay Krishnamurthy, Alekh Agarwal, John Langford, Robert E. Schapire. On Oracle-Efficient PAC RL with Rich Observations. NeurIPS 2018.
* Simon S. Du, Akshay Krishnamurthy, Nan Jiang, Alekh Agarwal, Miroslav Dudík, John Langford. Provably efficient RL with Rich Observations via Latent State Decoding. ICML 2019.
* Wen Sun, Nan Jiang, Akshay Krishnamurthy, Alekh Agarwal, John Langford. Model-based RL in Contextual Decision Processes: PAC bounds and Exponential Improvements over Model-free Approaches. COLT 2019.
* Kefan Dong, Jian Peng, Yining Wang, Yuan Zhou. \sqrt{n}-Regret for Learning in Markov Decision Processes with Function Approximation and Low Bellman Rank. COLT 2020.

#### Imitation learning and Inverse Reinforcement Learning
* Wen Sun, Arun Venkatraman, Geoffrey J. Gordon, Byron Boots, J. Andrew Bagnell. Deeply AggreVaTeD: differentiable imitation learning for sequential prediction. ICML 2017.
* Gokul Swamy, Sanjiban Choudhury, J Andrew Bagnell, Steven Wu. Of Moments and Matching: A Game-Theoretic Framework for Closing the Imitation Gap. ICML 2021.
* Umar Syed and Robert E. Schapire. A Game-Theoretic Approach to Apprenticeship Learning. NeurIPS 2007.
* Alekh Agarwal, Ashwinkumar Badanidiyuru, Miroslav Dudik, Robert Schapire, Aleksandrs Slivkins. Robust Multi-objective Learning with Mentor Feedback. COLT 2014.
* Kareem Amin, Nan Jiang, Satinder Singh. Repeated Inverse Reinforcement Learning. NeurIPS 2017.
* Nived Rajaraman, Lin F. Yang, Jiantao Jiao, Kannan Ramachandran. Toward the Fundamental Limits of Imitation Learning. NeurIPS 2020.
* Paria Rashidinejad, Banghua Zhu, Cong Ma, Jiantao Jiao, Stuart Russell. Bridging Offline Reinforcement Learning and Imitation Learning: A Tale of Pessimism. 2021.

[//]: # (* Ching-An Cheng and Byron Boots. Convergence of Value Aggregation for Imitation Learning. AISTATS 2018.* Wen Sun, Anirudh Vemula, Byron Boots, J. Andrew Bagnell. Provably Efficient Imitation Learning from Observation Alone. ICML 2019.)

