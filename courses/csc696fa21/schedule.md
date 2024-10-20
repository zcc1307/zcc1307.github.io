### CSC 696H: Topics in Reinforcement Learning Theory - Fall 2021

#### Tentative schedule

| Date  | Topics | Notes / slides | Additional readings  | Homework |
|:-:|:----------:|:---:|:-------:|:---:|
|8/24	| Administrivia; Introduction to RL	| [slides](notes/CSC696H_intro.pptx) |	AJKS Section 1.1-1.2 |  |
|8/26		|	MDP basics; Markov reward processes (MRPs); Bellman consistency equation 	|		[Scribe note 0826/ by Chicheng Zhang](https://www.overleaf.com/read/ydtgyvxhrfqg) |		AJKS Section 1.1.2	|			|		
|8/31		|	Bellman consistency equation and its interpretation; Optimal value functions |	[Scribe note 0831/ by Yinan Li](https://www.overleaf.com/read/ydtgyvxhrfqg)		|	AJKS Section 1.1.3	|			|		
|9/2		|	Bellman optimality equation; Contraction mapping; begin planning in MDPs	|	 [Scribe note 0902/ by Brady Gales](https://www.overleaf.com/read/ydtgyvxhrfqg)	|	 AJKS Section 1.1.3;  1.4.1		|			|	
|9/7		|	Planning: value iteration; begin policy iteration	|	[Scribe note 0907/ by Yangzi Lu](https://www.overleaf.com/read/ydtgyvxhrfqg)		|	 AJKS Section 1.4.1; 1.4.2	|			|		
|9/9		|	Planning: finish policy iteration; linear programming	|		[Scribe note 0909/ by Yichen Li](https://www.overleaf.com/read/ydtgyvxhrfqg)	|	AJKS Section 1.4.2; 1.5	|			|		
|9/14		|	Finite horizon episodic MDPs and planning; begin RL with a generative model	|	[Scribe note 0914/ by Yao Zhao](https://www.overleaf.com/read/ydtgyvxhrfqg)			|	 AJKS Section 1.2		|			|		
|9/16		|	Sample-based value iteration and analysis; simulation lemma	|	[Scribe note 0916/ by Zhiwu Guo](https://www.overleaf.com/read/ydtgyvxhrfqg)	|		AJKS Section 2.1-2.2, [Chi Jin's lecture notes 5,6](https://sites.google.com/view/cjin/ele524) (Optional) AJKS Section 2.3, [Proof of Hoeffding's Inequality](https://zcc1307.github.io/courses/csc588sp21/notes/lec4_handwritten.pdf)	|	[HW1](hw/CSC_696H_Homework_1.pdf)		|	
|9/21		|	Q-learning for RL with a generative model	|	[Scribe note 0921/ by Wenhan Zhang](https://www.overleaf.com/read/ydtgyvxhrfqg)		|		[Chi Jin's lecture notes 6,7](https://sites.google.com/view/cjin/ele524)	|			|		
|9/23		|	Finish Q-learning; Begin online episodic RL; Multi-armed bandits (MAB); Explore-then-commit	|		[Scribe note 0923/ by Robert Ferrando](https://www.overleaf.com/read/ydtgyvxhrfqg)	|		AJKS Sections 7.1, 6.1	|			|	
|9/28		|	MAB algorithms: epsilon-greedy, UCB; Failure of epsilon-greedy in online episodic RL		|		[Scribe note 0928/ by Ruoyao Wang](https://www.overleaf.com/read/ydtgyvxhrfqg)	|		AJKS Sections 6.1, [Optimistic Q-learning paper](https://arxiv.org/pdf/1807.03765.pdf) Appendix A |			|		
|9/30		|	The UCB-VI algorithm and its analysis		|	[Scribe note 0930/ by Zhengguang Zhang](https://www.overleaf.com/read/ydtgyvxhrfqg) |	AJKS Sections 7.2-7.4; Bernstein's Inequality: [My notes](https://zcc1307.github.io/courses/csc588sp21/notes/lec4_handwritten.pdf), Theorem 2.8.4 of [Vershynin's book](https://www.math.uci.edu/~rvershyn/papers/HDP-book/HDP-book.pdf); See also the proofs of AJKS Lemmas 7.3 and 7.8 for alternative proofs of model concentration using Azuma-Hoeffding / Azuma-Bernstein |			|		
|10/5		|	Finish UCB-VI analysis; Begin RL with function approximation	|		[Scribe note 1005/ by Hao Qin](https://www.overleaf.com/read/ydtgyvxhrfqg)	|		AJKS Sections 7.2-7.4; Chapter 3	|			|		
|10/7		|	The LSVI algorithm; Linear Bellman completeness; Experiment design / active learning		|	[Scribe note 1007/ by Bohan Li](https://www.overleaf.com/read/ydtgyvxhrfqg)		|		AJKS Sections 3.1-3.3.1	|			|		
|10/12		|	Statistical guarantees of realizable linear regression; LSVI with G-optimal design		|		[Scribe note 1012/ by Bao Do](https://www.overleaf.com/read/ydtgyvxhrfqg)	|		AJKS Lemma A.9, Theorem A.10, Sections 3.3.2-3.3.3	|			|		
|10/14		|	Finish LSVI with G-optimal design; Performance difference lemma; begin online RL in linear MDPs	|		[Scribe note 1014/ by Amir Yazdani](https://www.overleaf.com/read/ydtgyvxhrfqg)	|		AJKS Section 1.5 (discounted setting), Section 3.3.3, Sections 8.1-8.2	|			|		
|10/19		|	Online RL in linear MDPs: LSVI-UCB and its analysis	|		[Scribe note 1019/ by Yinan Li, Hao Qin, and Yichen Li](https://www.overleaf.com/read/ydtgyvxhrfqg)	|		AJKS Sections 8.3-8.7, [my draft notes](notes/draft_note_linear_mdp.pdf), [proof of elliptic potential lemma (page 7 onwards)](https://zcc1307.github.io/courses/csc588sp21/notes/lec24_handwritten.pdf), [LSVI-UCB paper](https://proceedings.mlr.press/v125/jin20a.html)	|		[HW2](hw/CSC_696H_Homework_2.pdf)	|		
|10/21		|		Wenhan Zhang: Deeply AggreVaTeD: Differentiable Imitation Learning for Sequential Prediction	|		[slides](notes/Deeply_AggreVaTeD_Wenhan.pptx)	|			|			|		
|10/26		|		Yinan Li: Is Q-learning Provably Efficient?	|		[slides](notes/oct_26_Q-learning_Yinan.pptx)	|			|			|		
|10/28		|		Bohan Li: Near-optimal reinforcement learning with self-play	|		[slides](notes/oct_28_bohan.pdf)	|			|			|		
|11/2		|		Yichen Li: Toward the Fundamental Limits of Imitation Learning	|		[slides](notes/nov_2_yichen.pptx)	|			|			|		
|11/4		|		Zhengguang Zhang: On Reinforcement Learning with Adversarial Corruption and Its Application to Block MDP	|	[slides](notes/nov_4_zhengguang.pdf)		|			|			|		
|11/9		|		Ruoyao Wang: Provably efficient RL with Rich Observations via Latent State Decoding	|	[slides](notes/nov_9_ruoyao.pptx)		|			|			|		
|11/11		|	 Yao Zhao: Near-Optimal Representation Learning for Linear Bandits and Linear RL (pre-recorded)	|	[slides](notes/nov_11_yao.pdf)		|			|			|		
|11/16		|		Yangzi Lu: Reward-Free Exploration for Reinforcement Learning	|	[slides](notes/nov_16_yangzi_Reward-free-Exploration.pptx)		|			|			|			
|11/18		|		Bao Do: Of Moments and Matching: A Game-Theoretic Framework for Closing the Imitation Gap	|		[slides](notes/nov_18_bao.pdf)	|			|			|			
|11/23		|		Robert Ferrando: Adaptive Discretization for Model-Based Reinforcement Learning	|	[slides](notes/nov_23_ADAMB_Robert_Ferrando.pdf)	|			|			|			
|11/25		|	No class - thanksgiving		|			|			|			|			
|11/30		|		Zhiwu Guo:  Online Learning in Unknown Markov Games	|		[slides](notes/nov_30_Zhiwu_v2.pptx)	|			|			|			
|12/2		|		Hao Qin: Nearly Minimax Optimal Reinfocement Learning for Linear Mixture Markov Decision Processes	|		[slides](notes/dec_2_hao_qin.pdf)	|			|			|			
|12/7		|		Amir Yazdani: Reinforcement Learning in Reward-Mixing MDPs	|	[slides](notes/dec_7_amir_rewardmixingRL.pptx)		|			|			|			














