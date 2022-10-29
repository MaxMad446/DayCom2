package main

// Auto-generated | 2026-05-14T06:23:25.958611
import "fmt"

func Process_812() int {
    base := 281
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_812())
}
