package main

// Auto-generated | 2026-05-11T20:20:32.664028
import "fmt"

func Process_778() int {
    base := 406
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_778())
}
