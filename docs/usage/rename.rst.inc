.. _borg_rename:

borg rename
-----------
::

    usage: borg rename [-h] [-v] [--debug] [--lock-wait N] [--show-rc]
                       [--no-files-cache] [--umask M] [--remote-path PATH]
                       ARCHIVE NEWNAME
    
    Rename an existing archive
    
    positional arguments:
      ARCHIVE               archive to rename
      NEWNAME               the new archive name to use
    
    optional arguments:
      -h, --help            show this help message and exit
      -v, --verbose, --info
                            enable informative (verbose) output, work on log level
                            INFO
      --debug               enable debug output, work on log level DEBUG
      --lock-wait N         wait for the lock, but max. N seconds (default: 1).
      --show-rc             show/log the return code (rc)
      --no-files-cache      do not load/update the file metadata cache used to
                            detect unchanged files
      --umask M             set umask to M (local and remote, default: 0077)
      --remote-path PATH    set remote path to executable (default: "borg")
    
Description
~~~~~~~~~~~

This command renames an archive in the repository.
