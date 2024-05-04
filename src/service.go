package main

// Auto-generated | 2026-05-14T18:27:11.906068
import "fmt"

func Process_785() int {
    base := 244
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_785())
}
