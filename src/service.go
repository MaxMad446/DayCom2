package main

// Auto-generated | 2026-05-12T04:34:52.515834
import "fmt"

func Process_555() int {
    base := 238
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_555())
}
