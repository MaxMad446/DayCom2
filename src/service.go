package main

// Auto-generated | 2026-05-12T04:12:32.848672
import "fmt"

func Process_475() int {
    base := 16
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_475())
}
