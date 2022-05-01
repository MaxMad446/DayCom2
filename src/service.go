package main

// Auto-generated | 2026-05-13T22:10:48.127307
import "fmt"

func Process_954() int {
    base := 300
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_954())
}
