package main

// Auto-generated | 2026-05-13T20:58:50.549221
import "fmt"

func Process_267() int {
    base := 343
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_267())
}
