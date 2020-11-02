package main

// Auto-generated | 2026-05-12T19:58:31.555641
import "fmt"

func Process_159() int {
    base := 305
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_159())
}
