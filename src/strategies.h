// Texts from "oblique strategies" by Peter Schmidt/Brian Eno
// https://en.wikipedia.org/wiki/Oblique_Strategies
// https://oblique.ookb.co/list.html
// raw data from https://oblique.ookb.co/oblique.json
// manual line breaks after 23 chracters to accomodate for 2.13" ePaper!
const char *oblique[] = {
"(Organic) machinery.",
"A line has two sides.",
"A very small object    \n- Its centre.",
"Abandon desire.",
"Abandon normal         \ninstructions.",
"Accept advice.",
"Accretion.",
"Adding on.",
"Allow an easement (an  \neasement is the\nabandonment of\na stricture).",
"Always give yourself   \ncredit for having more\nthan personality.",
"Always the first steps.",
"Animal noises.",
"Are there sections?    \nConsider transitions.",
"Ask a computer program \nto repeat your last\naction.",
"Ask people to work     \nagainst their better\njudgement.",
"Ask your body.",
"Assemble some of the   \nelements in a group\nand treat the group.",
"Back up a few steps.   \nWhat else could you\nhave done?",
"Balance the            \nconsistency principle\nwith the inconsistency\nprinciple.",
"Be dirty.",
"Be extravagant.",
"Be less critical more  \noften.",
"Breathe more deeply.",
"Build bridges.",
"Burn bridges.",
"Call your mother and   \nask her what to do.",
"Cascades.",
"Change ambiguities to  \nspecifics.",
"Change specifics to    \nambiguities.",
"Change instrument      \nroles.",
"Change nothing and     \ncontinue with \nimmaculate consistency.",
"Children's voices      \nspeaking.",
"Children's voices      \nsinging.",
"Cluster analysis.",
"Consider different     \nfading systems.",
"Consider transitions.",
"Consult other          \npromising sources.",
"Consult other          \nunpromising sources.",
"Convert a melodic      \nelement into a rhythmic element.",
"Courage!",
"Cut a vital connection.",
"Cut a virtual          \nconnection.",
"Decorate, decorate.",
"Define an area as      \n'safe' and use it as\nan anchor.",
"Describe the           \nlandscape in which\nthis belongs.",
"Destroy nothing.",
"Destroy the most       \nimportant thing.",
"Discard an axiom.",
"Disciplined            \nself-indulgence.",
"Disconnect from        \ndesire.",
"Discover the recipes   \nyou are using and\nabandon them.",
"Discover your formulas \nand abandon them.",
"Display your talent.",
"Distorting time.",
"Do nothing for as long \nas possible.",
"Do something boring.",
"Do something sudden,   \ndestructive and        unpredictable.",
"Do the last thing      \nfirst.",
"Do the washing up.",
"Do the words need      \nchanging?",
"Do we need holes?",
"Don't avoid what is    \neasy.",
"Don't be afraid of     \nthings because they're easy to do.",
"Don't be frightened    \nof cliches.",
"Don't be frightened    \nto display your\ntalents.",
"Don't break the        \nsilence.",
"Don't stress one       \nthing more than\nanother.",
"Emphasize differences.",
"Emphasize repetitions.",
"Emphasize the flaws.",
"Faced with a choice,   \ndo both!",
"Feed the recording     \nback out of the medium.",
"Feedback recordings    \ninto an acoustic\nsituation.",
"Fill every beat with   \nsomething.",
"First work alone, then \nwork in unusual pairs.",
"From nothing to more   \nthan nothing.",
"Get your neck massaged.",
"Ghost echoes.",
"Give the game away.",
"Give way to your worst \nimpulse.",
"Go outside. Shut the   \ndoor.",
"Go slowly all the way  \nround the outside.",
"Go to an extreme, move \nback to a more\ncomfortable place.",
"How would someone else \ndo it?",
"How would you explain  \nthis to your parents?",
"How would you have     \ndone it?",
"Humanize something     \nthat is free of error.",
"Idiot glee.",
"Imagine the music as   \na moving chain or\ncaterpillar.",
"Imagine the music as   \na series of\ndisconnected events.",
"In total darkness.",
"In a very large room,  \nvery quietly.",
"Infinitesimal          \ngradations.",
"Instead of changing    \nthe thing, change the  world around it.",
"Credibility of         \nintentions.",
"Nobility of intentions.",
"Humility of intentions.",
"Is it finished?",
"Is something missing?",
"Is the intonation      \ncorrect?",
"Is the style right?",
"Is the tuning          \nappropriate?",
"It is quite possible   \n(after all).",
"It is simply a matter  \nor work.",
"Just carry on.",
"Left channel, right    \nchannel, centre channel.",
"List the qualities it  \nhas. List those you'd\nlike.",
"Listen in total        \ndarkness.",
"Listen in a very large \nroom, very quietly.",
"Listen to the quiet    \nvoice",
"Look at a very small   \nobject, look at its\ncentre.",
"Look at the order in   \nwhich you do things.",
"Look closely at the    \nmost embarrassing\ndetails and amplify.",
"Lost in useless        \nterritory.",
"Lowest common          \ndenominator check:\nsingle beat; single\nnote; single riff.",
"Magnify the most       \ndifficult details.",
"Make a blank valuable  \nby putting it in an\nexcquisite frame.",
"Make a sudden,         \ndestructive\nunpredictable action.\nIncorporate.",
"Make an exhaustive     \nlist of everything you\nmight do and do the\nlast thing on the list.",
"Make it more sensual.",
"Make it more banal.",
"Make what's perfect    \nmore human.",
"Mechanize something    \nidiosyncratic.",
"Move towards the       \nimpossible.",
"Move towards the       \nunimportant.",
"Mute and continue.",
"Not building a wall    \nbut making a brick.",
"Once the search is in  \nprogress, something\nwill be found.",
"Only a part, not the   \nwhole.",
"Only one element of    \neach kind.",
"Overtly resist change.",
"Pae White's non-blank  \ngraphic metacard.",
"Pay attention to       \ndistractions.",
"Picture of a man       \nspotlighted.",
"Put in earplugs.",
"Question the heroic    \napproach.",
"Rearrange.",
"Remember those quiet   \nevenings.",
"Remove a restriction.",
"Remove ambiguities and \nconvert to specifics.",
"Remove specifics and   \nconvert to\nambiguities.",
"Remove the middle,     \nextend the edges.",
"Repetition is a form   \nof change.",
"Retrace your steps.",
"Revaluation            \n(a warm feeling).",
"Reverse.",
"Short circuit (example;\na man eating peas with\nthe idea that they\nwill improve his\nvirility shovels them \nstraight into his lap).",
"Shut the door and      \nlisten from outside.",
"Simple subtraction.",
"Simply a matter of     \nwork.",
"Slow preparation, fast \nexecution.",
"Spectrum analysis.",
"State the problem in   \nwords as simply as\npossible.",
"Steal a solution.",
"Take a break.",
"Take away as much      \nmystery as possible.\nWhat is left?",
"Take away the elements \nin order of apparent\nnon-importance.",
"Take away the          \nimportant parts.",
"Tape your mouth.",
"The inconsistency      \nprinciple.",
"The most important     \nthing is the thing     most easily           forgotten.",
"The tape is now the    \nmusic.",
"Think inside the work.",
"Think outside the      \nwork.",
"Think of the radio.",
"Tidy up.",
"Towards the            \ninsignificant.",
"Trust in the you of    \nnow.",
"Try faking it.",
"Turn it upside down.",
"Twist the spine.",
"Use 'unqualified'      \npeople.",
"Use an old idea.",
"Use an unacceptable    \ncolor.",
"Use cliches.",
"Use fewer notes.",
"Use filters.",
"Use something nearby   \nas a model.",
"Use your own ideas.",
"Voice your suspicions.",
"Water.",
"Fire.",
"Earth.",
"Wind.",
"Heart.",
"What are the sections  \nsections of? (Imagine\na caterpillar moving).",
"What context would     \nlook right?",
"What do you do? Now,   \nwhat do you do best?",
"What else is this      \nlike?",
"What is the reality    \nof the situation?",
"What is the simplest   \nsolution?",
"What mistakes did you  \nmake last time?",
"What most recently     \nimpressed you? How is\nit similar? What can\nyou learn from it?\nWhat could you take\nfrom it?",
"What to increase? What \nto reduce? What to\nmaintain?",
"What were the branch   \npoints in the\nevolution of this\nentity?",
"What were you really   \nthinking about just\nnow? Incorporate.",
"What would make this   \nreally successful?",
"What would your        \nclosest friend do?",
"What wouldn't you do?  \nDo that.",
"When is it for?",
"When is it for?        \nWho is it for?",
"Who is it for?",
"Where is the edge?",
"Which parts can be     \ngrouped?",
"Who would make this    \nreally successful?",
"Work at a different    \nspeed.",
"Would anyone want it?",
"You are an engineer.",
"You can only make one  \ndot at a time.",
"You don't have to be   \nashamed of using your\nown ideas.",
"Your mistake was a     \nhidden intention."
};
