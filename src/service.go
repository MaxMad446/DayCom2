package main

// Auto-generated | 2026-05-14T18:23:25.844932
import "fmt"

func Process_460() int {
    base := 87
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_460())
}
