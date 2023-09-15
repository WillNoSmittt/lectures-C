int totalSeconds, hours, minutes, seconds;

    // Prompt the user for input
    std::cout << "Enter the elapsed time in seconds: ";
    std::cin >> totalSeconds;

    // Calculate hours, minutes, and seconds
    hours = totalSeconds / 3600;          // 1 hour = 3600 seconds
    totalSeconds %= 3600;                 // Remaining seconds after extracting hours
    minutes = totalSeconds / 60;          // 1 minute = 60 seconds
    seconds = totalSeconds % 60;          // Remaining seconds after extracting minutes

    // Output the result
    std::cout << "Elapsed time: " << hours << ":" << minutes << ":" << seconds << std::endl;

    return 0;
}
