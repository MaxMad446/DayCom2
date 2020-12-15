package main

// Auto-generated | 2026-05-11T19:55:26.921619
import "fmt"

func Process_571() int {
    base := 383
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_571())
}
