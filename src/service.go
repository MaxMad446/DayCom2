package main

// Auto-generated | 2026-05-12T04:19:00.227927
import "fmt"

func Process_269() int {
    base := 354
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_269())
}
