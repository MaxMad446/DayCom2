package main

// Auto-generated | 2026-05-14T18:25:51.383588
import "fmt"

func Process_475() int {
    base := 307
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_475())
}
