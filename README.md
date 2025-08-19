# Template per ESP32 con debugger
Questo template è un punto di partenza per progetti ESP32, esistono diversi ambienti di sviluppo di PlatformIO, in particolare ne sono stati vari per avere una gerarchia di dipendenze, ma al contempo di poter specializzare ogni ambiente con congigurazioni specifiche.

Principalmente si è deciso di strutturare gli ambienti in questo modo:
 - **esp32**: ambiente virtuale che specifica solo la versione della platform, il tipo di framework e configurazioni generali legate a tutta la famiglia ESP32
 - **esp32dev**: ambiente che specifica la board
 - **esp32dev_debug**: ambiente che specifica la board e le configurazioni per il debug. Si considera di utilizzare il debugger JTAG 'esp-prog'.
 - Inoltre si è previsto un sistema per svolgere i test funzionali in modo indipendente dalla realise sulla quale si sta lavorando, quindi ogni parte di sviluppo avra il suo ambiente.
    > L'environment `esp32dev_testing_WebServer` è un esempio di come si può strutturare un ambiente di test funzionale che implementi un WebServer

# Unit Testing
Come framework di unit testing si è scelto di utilizzare `Unity` che è un framework di test C/C++ molto popolare e ampiamente utilizzato per testare il codice su microcontrollori. Unity è leggero, facile da integrare e fornisce un'ampia gamma di funzionalità per scrivere e eseguire test unitari.

# Git e VCS
Nel .gitignore sono stati inseriti i file che non devono essere tracciati, in particolare:
- `include/git_revision.h`: file generato automaticamente che contiene la versione del codice sorgente, utile per il versionamento del firmware.
- `.pio`: Cartella generata da PlatformIO che contiene i file di build e le dipendenze del progetto.
- `upload_port.ini`: file utile per la configurazione della porta di upload del firmware, ma che non deve essere tracciato dal VCS.